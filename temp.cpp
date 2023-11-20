#include <iostream>
#include <cstdlib>
using namespace std;

// Node structure to represent a tree node
struct Node
{
    int data;
    Node *rp, *lp; // Pointers to right and left children
};

// Node structure for the stack used in the queue implementation
struct stack_node
{
    Node *data;
    stack_node *next;
};

// Queue class for tree node insertion and display
class queue
{
    stack_node *head, *tail;

public:
    queue()
    {
        head = NULL;
        tail = NULL;
    }

    // Enqueue operation to insert a tree node into the queue
    void insert(Node *data)
    {
        stack_node *new_ptr = new stack_node;
        new_ptr->data = data;
        new_ptr->next = NULL;

        // If the queue is empty, set both head and tail to the new node
        if (tail == NULL)
        {
            tail = new_ptr;
            head = tail;
        }
        else
        {
            tail->next = new_ptr;
            tail = new_ptr;
        }
    }

    // Display the contents of the queue
    void display()
    {
        stack_node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data->data << " ";
            ptr = ptr->next;
        }
    }

    // Dequeue operation to retrieve a tree node from the queue
    Node *pop()
    {
        stack_node *ptr = head;
        head = head->next;

        // If the queue becomes empty, update the tail accordingly
        if (head == NULL)
            tail = NULL;

        return ptr->data;
    }

    // Check if the queue is empty
    int is_empty()
    {
        if (head == NULL)
            return 1;
        return 0;
    }
};

// Tree class to represent and traverse a binary tree
class Tree
{
    Node *head;
    queue qu;

public:
    Tree()
    {
        head = NULL;
    }

    // Function to insert a list into the binary tree
    void insert_list(int array[], int len)
    {
        head = new Node;
        head->data = array[0];
        head->rp = NULL;
        head->lp = NULL;
        qu.insert(head);

        int i = 1;
        while (qu.is_empty() != 1 && i < len)
        {
            Node *ptr = qu.pop();
            int left_node_index = (i * 2) - 1;
            int right_node_index = (i * 2);
            Node *left_ptr = NULL;
            Node *right_ptr = NULL;

            // Create left child if valid
            if (array[left_node_index] != -1 && left_node_index < len)
            {
                left_ptr = new Node;
                left_ptr->data = array[left_node_index];
                left_ptr->rp = NULL;
                left_ptr->lp = NULL;
                qu.insert(left_ptr);
            }

            ptr->lp = left_ptr;

            // Create right child if valid
            if (array[right_node_index] != -1 && right_node_index < len)
            {
                right_ptr = new Node;
                right_ptr->data = array[right_node_index];
                right_ptr->rp = NULL;
                right_ptr->lp = NULL;
                qu.insert(right_ptr);
            }

            ptr->rp = right_ptr;
            i++;
        }
    }

    // Helper function for inorder traversal
    void in_print_helper(Node *ptr)
    {
        if (ptr == NULL)
            return;

        // Recursively traverse the left subtree
        in_print_helper(ptr->lp);

        // Print the current node's data
        cout << ptr->data << " ";

        // Recursively traverse the right subtree
        in_print_helper(ptr->rp);
    }

    // Function to perform inorder traversal
    void in_print()
    {
        in_print_helper(head);
        cout << endl;
    }

    // Helper function for preorder traversal
    void pre_print_helper(Node *ptr)
    {
        if (ptr == NULL)
            return;

        // Print the current node's data
        cout << ptr->data << " ";

        // Recursively traverse the left subtree
        pre_print_helper(ptr->lp);

        // Recursively traverse the right subtree
        pre_print_helper(ptr->rp);
    }

    // Function to perform preorder traversal
    void pre_print()
    {
        pre_print_helper(head);
        cout << endl;
    }

    // Helper function for postorder traversal
    void post_print_helper(Node *ptr)
    {
        if (ptr == NULL)
            return;

        // Recursively traverse the left subtree
        post_print_helper(ptr->lp);

        // Recursively traverse the right subtree
        post_print_helper(ptr->rp);

        // Print the current node's data
        cout << ptr->data << " ";
    }

    // Function to perform postorder traversal
    void post_print()
    {
        post_print_helper(head);
        cout << endl;
    }
};

// Main function to demonstrate tree traversal
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(array) / sizeof(array[0]);
    Tree tree;
    tree.insert_list(array, len);

    cout << "Inorder Traversal: ";
    tree.in_print();

    cout << "Preorder Traversal: ";
    tree.pre_print();

    cout << "Postorder Traversal: ";
    tree.post_print();

    return 0;
}

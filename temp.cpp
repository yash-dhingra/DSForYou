
                #include <iostream>
using namespace std;

// Define a node structure for the stack
struct Node
{
    int data;     // Data of the node
    Node *next;   // Pointer to the next node in the stack
};

// Define a stack class
class stack
{
    Node *head, *tail; // Pointers to the head and tail nodes

public:
    // Constructor to initialize an empty stack
    stack()
    {
        head = NULL;
        tail = NULL;
    }

    // Function to insert a new element into the stack
    void insert(int data)
    {
        Node *new_ptr = new Node; // Create a new node
        new_ptr->data = data;     // Set its data
        new_ptr->next = NULL;     // Initialize its next pointer to NULL

        // If the stack is empty, set both head and tail to the new node
        if (tail == NULL)
        {
            tail = new_ptr;
            head = tail;
        }
        else
        {
            // If the stack is not empty, append the new node to the tail
            tail->next = new_ptr;
            tail = new_ptr;
        }
    }

    // Function to display the elements of the stack
    void display()
    {
        Node *ptr = head; // Start from the head of the stack
        while (ptr != NULL)
        {
            cout << ptr->data << " "; // Print the data of each node
            ptr = ptr->next;           // Move to the next node
        }
    }
};

int main()
{
    stack stack;   // Create an instance of the stack

    // Insert some elements into the stack
    stack.insert(5);
    stack.insert(6);
    stack.insert(7);

    // Display the elements of the stack
    stack.display();

    return 0;
}

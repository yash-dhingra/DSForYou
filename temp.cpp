
#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class stack
{
public:
    struct node *top;

    stack()
    {
        top = NULL;
    }

    void insert(int new_data)
    {
        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = top;
        top = new_node;
    }

    void display()
    {
        struct node *ptr;
        ptr = top;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty. Cannot pop.\n";
        }
        else
        {
            struct node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    void deleteFront()
    {
        if (top == NULL)
        {
            cout << "Stack is empty. Cannot delete from the front.\n";
        }
        else
        {
            struct node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    void deleteAfterNode(int value)
    {
        if (top == NULL)
        {
            cout << "Stack is empty. Cannot delete after a given node.\n";
        }
        else
        {
            struct node *current = top;
            while (current != NULL && current->data != value)
            {
                current = current->next;
            }

            if (current == NULL || current->next == NULL)
            {
                cout << "Node with the given value not found or it's the last node.\n";
            }
            else
            {
                struct node *temp = current->next;
                current->next = temp->next;
                delete temp;
            }
        }
    }

    void deleteEnd()
    {
        if (top == NULL)
        {
            cout << "Stack is empty. Cannot delete from the end.\n";
        }
        else
        {
            if (top->next == NULL)
            {
                delete top;
                top = NULL;
            }
            else
            {
                struct node *current = top;
                while (current->next->next != NULL)
                {
                    current = current->next;
                }
                delete current->next;
                current->next = NULL;
            }
        }
    }
};

int main()
{
    stack list;

    // Inserting random values into the stack
    for (int i = 0; i < 10; i++)
    {
        list.insert(rand() % 10);
    }

    cout << "Original Stack: ";
    list.display();

    // Deleting a node at the front
    list.deleteFront();
    cout << "After deleting front: ";
    list.display();

    // Deleting a node after a given node (e.g., after the first node)
    list.deleteAfterNode(list.top->data);
    cout << "After deleting after the first node: ";
    list.display();

    // Deleting a node at the end
    list.deleteEnd();
    cout << "After deleting from the end: ";
    list.display();

    return 0;
}

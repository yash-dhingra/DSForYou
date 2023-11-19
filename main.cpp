#include <iostream>
#include <fstream>
using namespace std;

void make_temp(string str){
    ofstream temp;
    temp.open("/Users/yashdhingra/Documents/GitHub/DSForYou/temp.cpp");
    temp << str;
    cout << "Check temp.cpp file for the code!\n";
    temp.close();
}

int main()
{
    int wait;
    // Introduction to the Project! Name of the Project: DSForYou (Data Structures For You)
    // This project will teach the user about the different data structures and how they work.
    // The user will be able to choose which data structure they want to learn about and then
    // they will be able to learn about it. The user will be able to learn about the following
    // data structures: Linked Lists, Stacks, Queues, Trees, and Graphs. The user will be able
    // to learn about the data structures by reading about them and then they will be able to
    // see examples of the data structures. The user will also be able to see the code for the
    // data structures. The user will be able to see the code for the data structures in C++,

    cout << "Welcome to DSForYou (Data Structures For You)!" << endl;
    cout << "This project will teach you about the different data structures and how they work." << endl;
    cout << "The data structures that you will be able to learn about are: Linked Lists, Stacks, Queues, Trees, Binary Search Trees, and Graphs." << endl;
    cout << "You will be able to learn about the data structures by reading about them and then you will be able to see examples of the data structures." << endl;
    cout << "You will also be able to see the code for the data structures." << endl;
    cout << "The code for the data structures will be in C++." << endl;
    cout << "Let's get started!" << endl;
    cout << endl;
    cout << "Enter any number to Continue...\n";
    cin >> wait;
    cout << "*************************************************************************" << endl;

    // The user will be able to continue where he/she left off.
    // The user will be able to choose which data structure he/she wants to learn about.
    // To be done later....

    // Give Choice of which database user wants to learn about.
    cout << "Which data structure would you like to learn about?" << endl;
    cout << "1. Linked Lists" << endl;
    cout << "2. Stacks" << endl;
    cout << "3. Queues" << endl;
    cout << "4. Trees" << endl;
    cout << "5. Binary Search Trees" << endl;
    cout << "6. Graphs" << endl;
    cout << "7. Exit" << endl;
    cout << "Please enter the number of the data structure you would like to learn about: ";
    int choice;
    cin >> choice;
    cout << endl;
    cout << "*************************************************************************" << endl;
    switch (choice)
    {
    case 1:
        cout << "Great! Let's learn about Linked Lists!" << endl;
        cout << endl;
        cout << "Linked List:\n"
             << "A linked list is a linear data structure where elements are stored in nodes,\n"
             << "and each node points to the next node in the sequence. It allows dynamic\n"
             << "memory allocation and efficient insertion or removal of elements at any position.\n\n"
             << "Advantages:\n"
             << "1. Dynamic Size: Linked lists can easily grow or shrink during execution.\n"
             << "2. Insertion and Deletion: These operations are more efficient than arrays.\n\n"
             << "Disadvantages:\n"
             << "1. Random Access: No constant-time random access to elements.\n"
             << "2. Memory Overhead: Each node requires additional memory.\n";
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Now that you know what a Linked List is, let's see insertion and deletion operation on a linked list!" << endl;
        cout << endl;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Insertion Operation:\n"
             << "Insertion operation is inserting a node into a linked list.\n"
             << "There are three cases for insertion operation:\n"
             << "1. Inserting a node at the front of the linked list.\n"
             << "2. Inserting a node after a given node.\n"
             << "3. Inserting a node at the end of the linked list.\n\n";
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Case 1: Inserting a node at the front of the linked list.\n"
             << "In this case, we will insert a node at the front of the linked list.\n"
             << "This means that the node will be the new head of the linked list.\n"
             ;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Case 2: Inserting a node after a given node.\n"
             << "In this case, we will insert a node after a given node.\n"
             ;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Case 3: Inserting a node at the end of the linked list.\n"
             << "In this case, we will insert a node at the end of the linked list.\n"
             << "This means that the node will be the new tail of the linked list.\n"
             ;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        
        cout << "Now that you know how insertion operations work on a linked list, let's see the code for a linked list!" << endl;
        cout << endl;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << R"(
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

    // Operation 1: Inserting a node at the front of the linked list
    void insertAtFront(int new_data)
    {
        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = top;
        top = new_node;
    }

    // Operation 2: Inserting a node after a given node
    void insertAfterNode(struct node *prev_node, int new_data)
    {
        if (prev_node == NULL)
        {
            cout << "Previous node is NULL. Cannot insert.\n";
            return;
        }

        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }

    // Operation 3: Inserting a node at the end of the linked list
    void insertAtEnd(int new_data)
    {
        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = NULL;

        if (top == NULL)
        {
            top = new_node;
            return;
        }

        struct node *last = top;
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = new_node;
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
            cout << "Stack underflow. Cannot pop.\n";
            return;
        }

        top = top->next;
    }
};

int main()
{
    stack list;

    // Original code: Insert random numbers
    for (int i = 0; i < 10; i++)
    {
        list.insertAtEnd(rand() % 10);
    }

    // Display original linked list
    cout << "Original Linked List: ";
    list.display();

    // Operation 1: Insert at the front
    list.insertAtFront(99);
    cout << "Linked List after inserting at the front: ";
    list.display();

    // Operation 2: Insert after a given node
    // For simplicity, insert after the first node
    list.insertAfterNode(list.top, 88);
    cout << "Linked List after inserting after a given node: ";
    list.display();

    // Operation 3: Insert at the end
    list.insertAtEnd(77);
    cout << "Linked List after inserting at the end: ";
    list.display();

    return 0;
}
)";
        cout << "*************************************************************************" << endl;
        cout << "Would you like to try to run this Code in a new file? (Y/N): ";
        char run;
        cin >> run;
        cout << "*************************************************************************" << endl;
        if(run=='Y'){
            string str = R"(
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

    // Operation 1: Inserting a node at the front of the linked list
    void insertAtFront(int new_data)
    {
        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = top;
        top = new_node;
    }

    // Operation 2: Inserting a node after a given node
    void insertAfterNode(struct node *prev_node, int new_data)
    {
        if (prev_node == NULL)
        {
            cout << "Previous node is NULL. Cannot insert.\n";
            return;
        }

        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }

    // Operation 3: Inserting a node at the end of the linked list
    void insertAtEnd(int new_data)
    {
        struct node *new_node = new node;
        new_node->data = new_data;
        new_node->next = NULL;

        if (top == NULL)
        {
            top = new_node;
            return;
        }

        struct node *last = top;
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = new_node;
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
            cout << "Stack underflow. Cannot pop.\n";
            return;
        }

        top = top->next;
    }
};

int main()
{
    stack list;

    // Original code: Insert random numbers
    for (int i = 0; i < 10; i++)
    {
        list.insertAtEnd(rand() % 10);
    }

    // Display original linked list
    cout << "Original Linked List: ";
    list.display();

    // Operation 1: Insert at the front
    list.insertAtFront(99);
    cout << "Linked List after inserting at the front: ";
    list.display();

    // Operation 2: Insert after a given node
    // For simplicity, insert after the first node
    list.insertAfterNode(list.top, 88);
    cout << "Linked List after inserting after a given node: ";
    list.display();

    // Operation 3: Insert at the end
    list.insertAtEnd(77);
    cout << "Linked List after inserting at the end: ";
    list.display();

    return 0;
}
)";
            make_temp(str);
        }
        cout << "*************************************************************************" << endl;
        cout << "Deletion Operation:\n"
             << "Deletion operation is deleting a node from a linked list.\n"
             << "There are three cases for deletion operation:\n"
             << "1. Deleting a node at the front of the linked list.\n"
             << "2. Deleting a node after a given node.\n"
             << "3. Deleting a node at the end of the linked list.\n\n"
             ;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Case 1: Deleting a node at the front of the linked list.\n"
             << "In this case, we will delete a node at the front of the linked list.\n"
             << "This means that the node will be the new head of the linked list.\n"
             ;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Case 2: Deleting a node after a given node.\n"
             << "In this case, we will delete a node after a given node.\n"
             ;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Case 3: Deleting a node at the end of the linked list.\n"
             << "In this case, we will delete a node at the end of the linked list.\n"
             << "This means that the node will be the new tail of the linked list.\n"
            ;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Now that you know how deletion operations work on a linked list, let's see the code for a linked list!" << endl;
        cout << endl;
        cout << "*************************************************************************" << endl;
        cout << R"(
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
)";
        cout << "*************************************************************************" << endl;
        cout << "Would you like to try to run this Code in a new file? (Y/N): ";
        cin >> run;
        cout << "*************************************************************************" << endl;
        if(run=='Y'){
            string str = R"(
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
)";
            make_temp(str);
        }

        cout << "*************************************************************************" << endl;
        break;
    }
}

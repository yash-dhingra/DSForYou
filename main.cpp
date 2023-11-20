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

// Function returns the index of last learnt concept by checking the progress.txt file
int last_learnt()
{
    ifstream progress;
    progress.open("/Users/yashdhingra/Documents/GitHub/DSForYou/progress.txt");
    int last;
    progress >> last;
    progress.close();
    return last;
}

// Funtion to update the progress.txt file
void update_progress(int last)
{
    ofstream progress;
    progress.open("/Users/yashdhingra/Documents/GitHub/DSForYou/progress.txt");
    progress << last;
    progress.close();
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
    cout << "Enter 1 to Continue where you left of.\nEnter 2 to start from the beginning.";
    int choice;
    cout << "\nWhat would you like to do?: ";
    cin >> wait;
    cout << "*************************************************************************" << endl;
    if(wait==1){
        int last = last_learnt();
        if(last==-1){ 
            cout << "You have not learnt about any data structures yet." << endl;
            return 0;
        }
        else if(last==1) cout << "You last learnt about Linked List " << endl;
        else if(last==2) cout << "You last learnt about Stack " << endl;
        else if(last==3) cout << "You last learnt about Queue " << endl;
        else if(last==4) cout << "You last learnt about Tree " << endl;
        else if(last==5) cout << "You last learnt about Binary Search Tree " << endl;
        else if(last==6) cout << "You last learnt about Graph " << endl;
        else if(last==7) {
            cout << "It seems like you have learnt about all the data structures. Let's reset your progress!" << endl;
            update_progress(0);
        }
        else return 0;
        cout << "*************************************************************************" << endl;
        cout << "Would you like to revise or move to the next data structure? (R/N): ";
        char choice1;
        cin >> choice1;
        cout << "*************************************************************************" << endl;
        if(choice1=='R') choice = last;
        else choice = last+1;


    }
    else{
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

        cin >> choice;
        cout << endl;
        cout << "*************************************************************************" << endl;
    }
    
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
        // Update Progress
        update_progress(1);
        break;
    case 2:
        cout << "Great! Let's learn about Stacks!" << endl;
        cout << endl;
        cout << "Stack:\n"
             << "A stack is a linear data structure that follows the Last In First Out (LIFO) principle.\n"
             << "The last element inserted into the stack is the first one to be deleted from the stack.\n"
             << "Stacks are used to implement functions, expressions, etc.\n\n"
             << "Advantages:\n"
             << "1. Easy to implement.\n"
             << "2. Memory is saved as pointers are not involved.\n"
             << "3. Insertion and deletion are easy.\n\n"
             << "Disadvantages:\n"
             << "1. It is not dynamic. It is static.\n"
             << "2. It is not efficient in memory usage.\n"
             << "3. It is not efficient in execution.\n";
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Now that you know what a Stack is, let's see insertion and deletion operation on a stack!" << endl;
        cout << endl;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Since Stacks follow LIFO all Insertions and deletions are done at the top of the stack. Time for the Code.....\n";
        // Display Code
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << R"(
#include <iostream>
#include <cstdlib>
using namespace std;

// Define a node structure for the stack
struct node
{
    int data;            // Data of the node
    struct node *next;   // Pointer to the next node in the stack
};

// Define a stack class
class stack
{
    struct node *top;   // Pointer to the top node of the stack

public:
    // Function to insert a new element into the stack
    void insert(int new_data)
    {
        struct node *new_node = new node;  // Create a new node
        new_node->data = new_data;         // Set its data
        new_node->next = top;              // Point the new node to the current top
        top = new_node;                    // Update the top to the new node
    }

    // Function to display the elements of the stack
    void display()
    {
        struct node *ptr;
        ptr = top;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";  // Print the data of each node
            ptr = ptr->next;           // Move to the next node
        }
        cout << endl;
    }

    // Constructor to initialize the stack with an empty state
    stack()
    {
        top = NULL;  // Set top to NULL indicating an empty stack
    }

    // Function to pop (remove) the top element from the stack
    void pop()
    {
        top = top->next;  // Move the top to the next node, effectively removing the top node
    }
};

int main()
{
    stack list;  // Create an instance of the stack

    // Insert 10 random values into the stack
    for (int i = 0; i < 10; i++)
    {
        list.insert(rand() % 10);
    }

    // Display the elements of the stack
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

// Define a node structure for the stack
struct node
{
    int data;            // Data of the node
    struct node *next;   // Pointer to the next node in the stack
};

// Define a stack class
class stack
{
    struct node *top;   // Pointer to the top node of the stack

public:
    // Function to insert a new element into the stack
    void insert(int new_data)
    {
        struct node *new_node = new node;  // Create a new node
        new_node->data = new_data;         // Set its data
        new_node->next = top;              // Point the new node to the current top
        top = new_node;                    // Update the top to the new node
    }

    // Function to display the elements of the stack
    void display()
    {
        struct node *ptr;
        ptr = top;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";  // Print the data of each node
            ptr = ptr->next;           // Move to the next node
        }
        cout << endl;
    }

    // Constructor to initialize the stack with an empty state
    stack()
    {
        top = NULL;  // Set top to NULL indicating an empty stack
    }

    // Function to pop (remove) the top element from the stack
    void pop()
    {
        top = top->next;  // Move the top to the next node, effectively removing the top node
    }
};

int main()
{
    stack list;  // Create an instance of the stack

    // Insert 10 random values into the stack
    for (int i = 0; i < 10; i++)
    {
        list.insert(rand() % 10);
    }

    // Display the elements of the stack
    list.display();

    return 0;
}
)";
            make_temp(str);
        }
        // Update Progress
        update_progress(2);
        break;
    case 3:
        cout << "Great! Let's learn about Queues!" << endl;
        cout << endl;
        cout << "Queue:\n"
             << "A queue is a linear data structure that follows the First In First Out (FIFO) principle.\n"
             << "The first element inserted into the queue is the first one to be deleted from the queue.\n"
             << "Queues are used to implement functions, expressions, etc.\n\n"
             << "Advantages:\n"
             << "1. Easy to implement.\n"
             << "2. Memory is saved as pointers are not involved.\n"
             << "3. Insertion and deletion are easy.\n\n"
             << "Disadvantages:\n"
             << "1. It is not dynamic. It is static.\n"
             << "2. It is not efficient in memory usage.\n"
             << "3. It is not efficient in execution.\n";
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Now that you know what a Queue is, let's see insertion and deletion operation on a queue!" << endl;
        cout << endl;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Since Queues follow FIFO all Insertions and deletions are done at the end of the queue. Time for the Code.....\n";
        // Display Code
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << R"(
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
)";
        cout << "*************************************************************************" << endl;
        cout << "Would you like to try to run this Code in a new file? (Y/N): ";
        cin >> run;
        cout << "*************************************************************************" << endl;
        if(run=='Y'){
            string str = R"(
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
)";
            make_temp(str);
        }
        // Update Progress
        update_progress(3);
        break;
    case 4:
        cout << "Great! Let's learn about Trees!" << endl;
        cout << endl;
        cout << R"(
// Trees Data Structure:

A tree is a hierarchical data structure composed of nodes connected by edges. It is widely used in computer science for representing hierarchical relationships and is a fundamental part of various algorithms and data structures. Here's a brief description of trees:

// Basic Tree Terminology:

1. Node: Each element in a tree is called a node. Nodes have a value (or key) and may have zero or more child nodes.

2. Edge: The connection between two nodes.

3. Root: The topmost node in a tree. It is the starting point for traversing the tree.

4. Parent: A node that has child nodes.

5. Child: Nodes directly connected to another node when moving away from the root.

6. Leaf: Nodes with no children.

7. Subtree: A tree formed by a node and all its descendants.

8. Height: The length of the longest path from a node to a leaf.

// Types of Trees:

1. Binary Tree:
   - Each node has at most two children, referred to as the left child and the right child.
   - Special cases include Binary Search Trees (BST) where the left child is less than the parent, and the right child is greater.

2. Binary Search Tree (BST):
   - A binary tree where, for each node, all elements in its left subtree are less than the node, and all elements in its right subtree are greater.

3. AVL Tree:
   - A self-balancing binary search tree, ensuring the height difference between the left and right subtrees is at most 1.

4. B-Tree:
   - A self-balancing tree structure used in databases and file systems for efficient data storage and retrieval.

5. Trie (Prefix Tree):
   - A tree-like data structure used to store a dynamic set or associative array where the keys are usually strings.

// Advantages of Trees:

1. Hierarchical Structure: Trees naturally represent hierarchical relationships, making them suitable for modeling hierarchical structures in data.

2. Efficient Search and Retrieval Operations: Binary search trees and other tree structures provide efficient search, insert, and delete operations.

3. Balancing: Self-balancing trees (e.g., AVL trees) maintain balance, ensuring optimal performance for various operations.

4. Natural Representation of Hierarchies: Trees are well-suited for representing hierarchical relationships, such as file systems, organization charts, and family trees.

// Disadvantages of Trees:

1. Space Overhead: Trees may have a higher space overhead compared to other data structures due to the need for pointers or references.

2. Complexity: Implementing and maintaining certain types of trees, especially self-balancing ones, can be complex.

3. Search Performance Variation: Depending on the type of tree and its balance, worst-case search times may vary.

4. Limited Sorting: Binary search trees might not be as efficient for certain types of data as more advanced structures like hash tables.

In summary, trees are versatile data structures with various applications, and the choice of a particular tree type depends on the specific requirements and characteristics of the data being represented or manipulated.
)" << endl;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << R"(
// Representation of a Tree:

A tree can be represented in different ways. Two common representations are using an array and using nodes.

// Tree Representation using an Array:

In this representation, a tree is stored in an array where each element of the array corresponds to a node in the tree. The relationship between nodes is determined by the array indices. For a node at index i, its left child is at 2*i + 1, and its right child is at 2*i + 2. The root is at index 0.

Advantages:
- Simple and compact representation.
- Easy to implement.

Disadvantages:
- May result in wasted space for sparse trees.
- Dynamic resizing can be challenging.

// Tree Representation using Nodes:

In this representation, each node of the tree is an object (struct or class) containing data and references or pointers to its children. The relationships between nodes are established through these pointers.

Advantages:
- Flexible and dynamic structure.
- Suitable for dynamic trees with varying sizes.

Disadvantages:
- Higher space overhead due to the need for pointers.
- Complex implementation compared to array representation.

)" << endl;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Let's Talk about traversal in Trees..."<<endl;
        cout << R"(
// Tree Traversals:

Tree traversals are methods used to visit and process each node in a tree. Three common traversals are Inorder, Preorder, and Postorder.

// Inorder Traversal:

In Inorder traversal, the left subtree is visited first, followed by the root, and then the right subtree. It is commonly used for binary search trees to get elements in sorted order.

// Preorder Traversal:

In Preorder traversal, the root is visited first, followed by the left subtree, and then the right subtree. It is useful for creating a prefix expression (Polish notation) in expression trees.

// Postorder Traversal:

In Postorder traversal, the left and right subtrees are visited before the root. It is commonly used for deleting nodes from a tree, as it ensures that a node is deleted only after its children.

In summary, each traversal has its specific use cases, and the choice depends on the problem requirements and the order of processing nodes.
)" << endl;
        cout << "*************************************************************************" << endl;

        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << "Now that you've learnt about Trees, let's see the code for a Binary Search Tree!" << endl;
        cout << endl;
        cout << "Enter any number to Continue...\n";
        cin >> wait;
        cout << "*************************************************************************" << endl;
        cout << R"(
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
)" << endl;
        cout << "*************************************************************************" << endl;
        cout << "Would you like to try to run this Code in a new file? (Y/N): ";
        cin >> run;
        cout << "*************************************************************************" << endl;
        if(run=='Y'){
            string str = R"(#include <iostream>
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
)";
            make_temp(str);
        }
        // Update Progress
        update_progress(4);
            break;
        case 5:
            cout << "Great! Let's learn about Binary Search Trees!" << endl;
            cout << endl;
            cout << R"(
Binary Search Tree (BST):

A Binary Search Tree is a binary tree data structure where each node has at most two children, referred to as the left child and the right child. The key property of a BST is that the value of each node in the left subtree is less than or equal to the node's value, and the value of each node in the right subtree is greater than or equal to the node's value. This ordering property makes binary search possible, making it efficient for searching, insertion, and deletion operations.

Advantages:

1. Efficient Search Operation: The ordering property of BSTs allows for efficient searching. Binary search can be performed, reducing the time complexity to O(log n) on average.

2. Ease of Traversal: In-order traversal of a BST yields a sorted sequence of elements, which is useful in scenarios where sorted data is required.

3. Ease of Insertion and Deletion: Insertion and deletion operations in a BST are generally efficient, especially when compared to other data structures. The time complexity is O(log n) on average.

4. Memory Efficiency: BSTs are memory-efficient compared to other data structures for searching, as they don't require additional storage for pointers to child nodes.

Disadvantages:

1. Unbalanced Trees: If the data is inserted in a sorted order, a BST may become unbalanced, resembling a linked list. This degrades the search performance to O(n) in the worst case.

2. Sensitive to Input Order: The performance of a BST can be highly sensitive to the order of insertion. Poorly balanced trees may result in suboptimal search times.

3. No O(1) Operations: Unlike some other data structures (e.g., hash tables), there is no guarantee of O(1) time complexity for any operation. The average time complexity is O(log n), but it can degrade to O(n) in the worst case.

4. Limited for Duplicate Values: Traditional BSTs do not handle duplicate values well. Additional modifications (like using a self-balancing BST) are needed to address this limitation.

Conclusion:

Binary Search Trees are powerful data structures with efficient search, insertion, and deletion operations under favorable conditions. However, careful management is required to avoid potential performance pitfalls, such as tree imbalance. Variants like Balanced Binary Search Trees (e.g., AVL trees, Red-Black trees) address some of these issues by ensuring balance and improving worst-case time complexities. Understanding the characteristics and trade-offs is crucial for selecting the appropriate data structure based on the specific use case and requirements.
)" << endl;
            cout << "*************************************************************************" << endl;
            cout << "Now that you know what a Binary Search Tree is, let's see insertion and deletion operation on a BST!" << endl;
            cout << endl;
            cout << "Enter any number to Continue...\n";
            cin >> wait;
            cout << "*************************************************************************" << endl;
            cout << R"(
Binary Search Tree (BST) - Insertion and Deletion:

Insertion in BST:

To insert a new element into a Binary Search Tree (BST), follow these steps:
1. Start at the root of the tree.
2. Compare the value of the new element with the current node's value.
3. If the new value is less than the current node's value, move to the left subtree.
4. If the new value is greater than the current node's value, move to the right subtree.
5. Repeat steps 2-4 until an empty spot is found.
6. Insert the new element at the empty spot.

Deletion in BST:

Deleting a node from a BST involves three cases:
1. Node with No Children: Simply remove the node.
2. Node with One Child: Replace the node with its child.
3. Node with Two Children:
   - Find the in-order successor (smallest node in the right subtree) or in-order predecessor (largest node in the left subtree).
   - Replace the node's value with the in-order successor/predecessor.
   - Recursively delete the in-order successor/predecessor.

These operations maintain the binary search property of the tree.

Note: While average cases are efficient (O(log n)), worst-case scenarios may arise, particularly with unbalanced trees.

)" << endl;
            cout << "Enter any number to Continue...\n";
            cin >> wait;
            cout << "*************************************************************************" << endl;
            cout << "Now that you've learnt about Binary Search Trees, let's see the code for a Binary Search Tree!" << endl;
            cout << endl;
            cout << "Enter any number to Continue...\n";
            cin >> wait;
            cout << "*************************************************************************" << endl;
            cout << R"(
#include <iostream>
#include <cstdlib>
using namespace std;

// Node structure to represent a binary tree node
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
                cout << "LN: " << array[left_node_index] << endl;
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
                cout << "RN: " << array[right_node_index] << endl;
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

    // Helper function to calculate the height of the tree
    int height(Node *ptr)
    {
        if (ptr == NULL)
            return 0;
        int x, y;
        x = height(ptr->lp);
        y = height(ptr->rp);
        if (x > y)
            return 1 + x;
        else
            return 1 + y;
    }

    // Helper function to find the in-order predecessor of a node
    Node *InPred(Node *ptr)
    {
        while (ptr != NULL && ptr->rp != NULL)
        {
            ptr = ptr->rp;
        }
        return ptr;
    }

    // Helper function to find the in-order successor of a node
    Node *InSucc(Node *ptr)
    {
        while (ptr != NULL && ptr->lp != NULL)
        {
            ptr = ptr->lp;
        }
        return ptr;
    }

    // Helper function for node deletion
    Node *delete_helper(Node *ptr, int key)
    {
        Node *replace;
        if (ptr == NULL)
            return NULL;

        // Case 1: Node with no children
        if (ptr->rp == NULL && ptr->lp == NULL)
        {
            if (ptr == head)
            {
                head = NULL;
            }
            free(ptr);
            return NULL;
        }

        // Case 2: Node with one child
        if (ptr->data > key)
        {
            ptr->lp = delete_helper(ptr->lp, key);
        }
        else if (ptr->data < key)
        {
            ptr->rp = delete_helper(ptr->rp, key);
        }
        else
        {
            // Case 3: Node with two children
            if (height(ptr->lp) > height(ptr->rp))
            {
                replace = InPred(ptr->lp);
                ptr->data = replace->data;
                ptr->lp = delete_helper(ptr->lp, replace->data);
            }
            else
            {
                replace = InSucc(ptr->rp);
                ptr->data = replace->data;
                ptr->rp = delete_helper(ptr->rp, replace->data);
            }
        }
        return ptr;
    }

    // Function to delete a node with a given key
    void del(int key)
    {
        delete_helper(head, key);
    }

    // Function to insert a node into the binary search tree (BST)
    Node *push_bst_helper(Node *ptr, int data)
    {
        if (ptr == NULL)
        {
            // Create a new node if the current node is NULL
            ptr = new Node;
            ptr->data = data;
            ptr->rp = ptr->lp = NULL;
        }
        else if (ptr->data < data)
        {
            // Recursively insert into the right subtree if data is greater
            ptr->rp = push_bst_helper(ptr->rp, data);
        }
        else if (ptr->data > data)
        {
            // Recursively insert into the left subtree if data is smaller
            ptr->lp = push_bst_helper(ptr->lp, data);
        }

        return ptr;
    }

    // Function to insert a node into the binary search tree (BST)
    void push_bst(int data)
    {
        head = push_bst_helper(head, data);
    }
};

int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    cout << endl;
    int len = sizeof(array) / sizeof(array[0]);
    Tree tree;
    int arr[] = {1};
    tree.insert_list(arr, 1);
    for (int i = 0; i < 10; i++)
    {
        tree.push_bst(array[i]);
    }
    cout << endl;
    tree.in_print();

    cout << "\nAfter deleting 8 from the tree" << endl;

    tree.del(8);

    tree.in_print();

    return 0;
}
)" << endl;
            cout << "*************************************************************************" << endl;
            cout << "Would you like to try to run this Code in a new file? (Y/N): ";
            cin >> run;
            cout << "*************************************************************************" << endl;
            if(run=='Y'){
                string str = R"(#include <iostream>
#include <cstdlib>
using namespace std;

// Node structure to represent a binary tree node
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
                cout << "LN: " << array[left_node_index] << endl;
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
                cout << "RN: " << array[right_node_index] << endl;
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

    // Helper function to calculate the height of the tree
    int height(Node *ptr)
    {
        if (ptr == NULL)
            return 0;
        int x, y;
        x = height(ptr->lp);
        y = height(ptr->rp);
        if (x > y)
            return 1 + x;
        else
            return 1 + y;
    }

    // Helper function to find the in-order predecessor of a node
    Node *InPred(Node *ptr)
    {
        while (ptr != NULL && ptr->rp != NULL)
        {
            ptr = ptr->rp;
        }
        return ptr;
    }

    // Helper function to find the in-order successor of a node
    Node *InSucc(Node *ptr)
    {
        while (ptr != NULL && ptr->lp != NULL)
        {
            ptr = ptr->lp;
        }
        return ptr;
    }

    // Helper function for node deletion
    Node *delete_helper(Node *ptr, int key)
    {
        Node *replace;
        if (ptr == NULL)
            return NULL;

        // Case 1: Node with no children
        if (ptr->rp == NULL && ptr->lp == NULL)
        {
            if (ptr == head)
            {
                head = NULL;
            }
            free(ptr);
            return NULL;
        }

        // Case 2: Node with one child
        if (ptr->data > key)
        {
            ptr->lp = delete_helper(ptr->lp, key);
        }
        else if (ptr->data < key)
        {
            ptr->rp = delete_helper(ptr->rp, key);
        }
        else
        {
            // Case 3: Node with two children
            if (height(ptr->lp) > height(ptr->rp))
            {
                replace = InPred(ptr->lp);
                ptr->data = replace->data;
                ptr->lp = delete_helper(ptr->lp, replace->data);
            }
            else
            {
                replace = InSucc(ptr->rp);
                ptr->data = replace->data;
                ptr->rp = delete_helper(ptr->rp, replace->data);
            }
        }
        return ptr;
    }

    // Function to delete a node with a given key
    void del(int key)
    {
        delete_helper(head, key);
    }

    // Function to insert a node into the binary search tree (BST)
    Node *push_bst_helper(Node *ptr, int data)
    {
        if (ptr == NULL)
        {
            // Create a new node if the current node is NULL
            ptr = new Node;
            ptr->data = data;
            ptr->rp = ptr->lp = NULL;
        }
        else if (ptr->data < data)
        {
            // Recursively insert into the right subtree if data is greater
            ptr->rp = push_bst_helper(ptr->rp, data);
        }
        else if (ptr->data > data)
        {
            // Recursively insert into the left subtree if data is smaller
            ptr->lp = push_bst_helper(ptr->lp, data);
        }

        return ptr;
    }

    // Function to insert a node into the binary search tree (BST)
    void push_bst(int data)
    {
        head = push_bst_helper(head, data);
    }
};

int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    cout << endl;
    int len = sizeof(array) / sizeof(array[0]);
    Tree tree;
    int arr[] = {1};
    tree.insert_list(arr, 1);
    for (int i = 0; i < 10; i++)
    {
        tree.push_bst(array[i]);
    }
    cout << endl;
    tree.in_print();

    cout << "\nAfter deleting 8 from the tree" << endl;

    tree.del(8);

    tree.in_print();

    return 0;
}
)";
                make_temp(str);
            }
            // Update Progress
            update_progress(5);
            break;
        case 6:
        // Under Maintanance Message.....
            cout << "*************************************************************************" << endl;
            cout << "This Section is Under Maintanance! Please try again later!" << endl;
            cout << "*************************************************************************" << endl;
            cout << "*************************************************************************" << endl;
            break;
    }

    
}

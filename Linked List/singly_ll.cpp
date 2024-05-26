#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    // Parameterised Constructor
    Node(int data)
    {
        value = data;
        next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->value; // this pointing to main value top most
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data : " << value << "\n";
    }
};

// INSERT AT HEAD
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val); // new node creation
    temp->next = head;
    head = temp;
    if (tail == NULL)
    { // if list was initially empty
        tail = head;
    }
}

// INSERT AT END
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    if (tail == NULL)
    { // if list is empty
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int val)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, val);
        return;
    }

    Node *trav = head; // traverse in ll
    int ind = 1;

    while (ind < position - 1 && trav != NULL)
    {
        trav = trav->next;
        ind++;
    }

    // now trav has come at position  -> (position-1)

    // insert at last if position is greater than the length of the list
    if (trav == NULL || trav->next == NULL)
    {
        insertAtTail(head, tail, val);
        return;
    }

    // insert at middle
    Node *temp = new Node(val); // node to be inserted
    temp->next = trav->next;
    trav->next = temp;
}

void display(Node *head)
{
    // PRINT THE VALUE
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    // delete at first
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free of start node
        temp->next = NULL;
        delete temp;

        if (head == NULL)
            tail = NULL;

        return;
    }
    else
    {
        // delete any middle or last node
        Node *curr = head;
        Node *prev = NULL;

        int ind = 1;

        while (ind < position)
        {
            prev = curr;
            curr = curr->next;
            ind++;
        }

        prev->next = curr->next;

        if (curr == tail)
            tail = prev;

        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 5);

    insertAtTail(head, tail, 7);
    insertAtTail(head, tail, 11);

    display(head);

    insertAtPosition(head, tail, 3, 20);
    insertAtPosition(head, tail, 1, 15);
    insertAtPosition(head, tail, 7, 69);

    display(head);

    deleteNode(head, tail, 4);
    deleteNode(head, tail, 6);
    deleteNode(head, tail, 1);

    display(head);

    if (head != NULL)
    {
        cout << "head " << head->value << "\n";
    }
    else
    {
        cout << "head is NULL\n";
    }

    if (tail != NULL)
    {
        cout << "tail " << tail->value << "\n";
    }
    else
    {
        cout << "tail is NULL\n";
    }

    return 0;
}

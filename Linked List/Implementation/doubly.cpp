#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

// traversing a linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int getlength(Node *head)
{
    int size = 0;

    Node *trav = head;
    while (trav != NULL)
    {
        size++;
        trav = trav->next;
    }
    return size;
}

void InsertAtHead(Node *&tail, Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = head;
        return;
    }
    else
    {
        Node *temp = new Node(data);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

void InsertAtTail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = tail;
        return;
    }
    else
    {
        Node *temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // Inserting at head if position is 1
    if (position == 1)
    {
        InsertAtHead(tail, head, data);
        return;
    }

    Node *trav = head;
    int cnt = 1;

    // Traverse to the node just before the desired position
    while (cnt < position - 1 && trav != NULL)
    {
        trav = trav->next;
        cnt++;
    }

    // If the position is out of bounds, insert at the tail
    if (trav == NULL || trav->next == NULL)
    {
        InsertAtTail(tail, head, data);
        return;
    }

    // Inserting in the middle
    Node *temp = new Node(data);

    temp->next = trav->next;
    temp->prev = trav;
    trav->next->prev = temp;
    trav->next = temp;
}

void DeleteNode(Node *&tail, Node *&head, int position)
{
    // DELETION AT HEAD
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;

        delete temp;
        return;
    }

    int cnt = 1;
    Node *trav = head;

    // Traverse to the node just before the desired position
    while (cnt < position - 1 && trav != NULL)
    {
        trav = trav->next;
        cnt++;
    }

    if (trav == NULL || trav->next == NULL)
    {
        // Invalid position
        return;
    }

    // DELETION AT TAIL
    if (trav->next->next == NULL)
    {
        Node *temp = tail;
        tail = trav;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    // Deleting a node in the middle
    Node *temp = trav->next;
    trav->next = temp->next;

    temp->next->prev = trav;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
}

int main()
{
    Node *n1 = new Node(10);
    // Node *head = n1;
    // Node *tail = n1;

    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    cout << getlength(head) << endl;

    InsertAtHead(tail, head, 13);

    print(head);
    cout << getlength(head) << endl;

    InsertAtTail(tail, head, 14);
    InsertAtTail(tail, head, 21);
    InsertAtTail(tail, head, 28);
    InsertAtTail(tail, head, 35);

    print(head);

    // here i took position 1= for 0th index

    InsertAtPosition(head, tail, 4, 99);
    InsertAtPosition(head, tail, 1, 98);
    InsertAtPosition(head, tail, 9, 100);

    print(head);

    DeleteNode(tail, head, 1);
    print(head);

    DeleteNode(tail, head, 4);
    print(head);

    DeleteNode(tail, head, 6);
    print(head);
}

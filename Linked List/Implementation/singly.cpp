#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int data)
{
    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int data)
{

    //inserting at start
    if (position == 0)
    {
        InsertAtHead(head, data);
        return;
    }

    int cnt = 0;
    Node *trav = head;
    while (position - 1 != cnt)
    {
        trav = trav->next;
        cnt++;
    }

    if(trav->next==NULL)
    {
        InsertAtTail(tail,data);
        return;
    }
    
    // inserting temp node
    Node *temp = new Node(data);
    temp->next = trav->next;
    trav->next = temp;
}

//delete at any position
void DeleteNode(Node *&head,int position)
{
    if(position==0)
    {
        Node *temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
        return;
    }

    //traversing to the position 
    Node *trav=head;
    int cnt=0;
    while(position-1!=cnt)
    {
        trav=trav->next;
        cnt++;
    }

    //node to delete - temp
    Node *temp=trav->next;
    trav->next=temp->next;

    //point its next to null before deleting it
    temp->next=NULL;
    delete temp;
}
// traverse a linked list
void print(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new node.
    Node *n1 = new Node(10);

    // head pointed to n1
    Node *head = n1;

    Node *tail = n1;

    //Insert at head
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    InsertAtHead(head, 40);

    //Insert at tail
    InsertAtTail(tail, 50);
    InsertAtTail(tail, 60);
    InsertAtTail(tail, 70);

    //i am taking position == index

    //insert at any position
    InsertAtPosition(tail, head, 5, 105);
    InsertAtPosition(tail, head, 8, 108);
    InsertAtPosition(tail, head, 0, 100);

    print(head);

    cout<<"head ka data: "<<head->data<<endl;
    cout<<"tail ka data: "<<tail->data<<endl;

    //delete at any position
    DeleteNode(head,9);

    print(head);
}

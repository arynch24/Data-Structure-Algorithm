#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        value = data;
        prev = NULL;
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

void display(Node *head)
{
    Node *temp = head;

    while (temp!= NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at head
void insertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&head, int val)
{
    Node *temp=new Node(val);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    Node *trav=head;
    while(trav->next!=NULL)
    {
        trav=trav->next;
    }
    trav->next=temp;
    temp->prev=trav;
}

void insertAtPosition(Node *&head,int position,int val){
    int ind=1;
    Node *temp=new Node(val);
    Node *trav=head;
    while(ind<position-1)
    {
        ind++;
        trav=trav->next;
    }
    temp->next=trav->next;
    trav->next->prev=temp;
    temp->prev=trav;
    trav->next=temp;
}

void deleteNode(Node *&head, int position)
{
    // delete at first
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free of start node
        temp->next = NULL;
        delete temp;

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
        curr->next->prev=prev;

        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    display(head);
    cout<<getLength(head)<<endl;
    insertAtTail(head,9);
    insertAtTail(head,8);
    insertAtTail(head,7);
    display(head);
    cout<<getLength(head)<<endl;
    insertAtPosition(head,3,69);
    display(head);
    cout<<getLength(head)<<endl;

    deleteNode(head,4);
    deleteNode(head,1);

    display(head);
}
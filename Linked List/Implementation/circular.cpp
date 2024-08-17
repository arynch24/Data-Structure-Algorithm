#include <bits/stdc++.h>
using namespace std;

// singly circular linked list
// no need to use head
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

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// Inserting a node on behalf of a data given

void InsertNode(Node *&tail, int element, int data)
{

    // if list is empty
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *trav = tail;

        while (trav->data != element)
        {
            trav = trav->next;
        }

        // element found -> trav is representing element wala node
        Node *temp = new Node(data);
        temp->next = trav->next;
        trav->next = temp;
    }
}

// Deleting on basis of value given

void DeleteNode(Node* &tail, int value) {
    // Empty list
    if(tail == NULL) {
        cout << "List is empty, please check again" << endl;
        return;
    }
    
    Node* prev = tail;
    Node* curr = prev->next;

    // Check if the node to be deleted is the only node in the list
    if(curr == tail && curr->data == value) {
        delete curr;
        tail = NULL;
        cout << "Node with data " << value << " deleted." << endl;
        return;
    }

    // Traverse the list to find the node to delete
    do {
        if(curr->data == value) {
            prev->next = curr->next;

            // If the node to be deleted is the tail, update the tail pointer
            if(curr == tail) {
                tail = prev;
            }

            // Delete the node
            curr->next = NULL;
            delete curr;

            cout << "Node with data " << value << " deleted." << endl;
            return;
        }

        prev = curr;
        curr = curr->next;

    } while(prev != tail);

    cout << "Node with data " << value << " not found." << endl;
}



// traverse a linked list
void print(Node *tail) // pass by value
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << "->";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

int main()
{
    Node *tail = NULL;

    // Inserting nodes
    InsertNode(tail, 8, 11); // Inserts when list is empty
    print(tail);

    InsertNode(tail, 11, 21); // Insert after 11
    print(tail);

    InsertNode(tail, 21, 31); // Insert after 21
    print(tail);

    InsertNode(tail, 31, 41); // Insert after 31
    print(tail);

    InsertNode(tail, 11, 51); // Insert after 11
    print(tail);

    // Deleting nodes
    DeleteNode(tail, 11);  // Deleting head node
    print(tail);

    DeleteNode(tail, 41);  // Deleting tail node
    print(tail);

    DeleteNode(tail, 100); // Attempt to delete non-existent node
    print(tail);

    DeleteNode(tail, 21);  // Deleting a middle node
    print(tail);

    DeleteNode(tail, 51);  // Deleting remaining nodes
    print(tail);

    DeleteNode(tail, 31);
    print(tail);
}

 
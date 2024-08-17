#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    // Node A1(4); //CREATING NODE IN STATIC WAY ->MEMORY ALLOCATION
    // IN DYNAMIC WAY
    Node *Head;
    Head = NULL;
    Head = new Node(4); // this will create a new node which contain value 4.
    cout << (*Head).data << endl;
    cout << (*Head).next << endl;

    int arr[] = {2, 4, 6, 7, 1};
    // INSERT THE NODE AT BEGINNING
    for (int i = 0; i < 5; i++)
    {
        // IF LL NOT EXISTS
        if (Head == NULL)
            Head = new Node(arr[i]);
        // IF LL EXISTS -
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // INSERT NODE AT THE END

    Node *Tail;
    Tail = Head;
    while(Tail->next!=NULL)
    {
        Tail=Tail->next;
    }

    int arr_t[] = {9, 6, 3, 6, 7};
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr_t[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new Node(arr_t[i]);
            Tail = Tail->next;
        }
    }

    // Print the value.
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
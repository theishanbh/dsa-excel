#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// insert at Tail

void insertAtTail(Node *&head, int data)
{

    if (head == nullptr)
    {
        head = new Node(data);
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(data);
    temp->next->prev = temp;
}

// insert at head

void insertAtHead(Node *&node, int data)
{
    Node *temp = new Node(data);
    temp->next = node;
    temp->next->prev = temp;
    node = temp;
}

// display nodes in the linked list

void displayNodes(Node *&node)
{
    Node *temp = node;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// deleting at tail
void deleteAtTail(Node *&node)
{ /* code */
    if (node == nullptr)
    {
        cout << "NO elements to delete" << endl;
        return;
    }
    else if (node->next == nullptr)
    {
        node = nullptr;
    }
    Node *temp = node;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
}

// deleting at head
void deleteAtHead(Node *&head)
{
    if (head == nullptr)
    {
        cout << " No elements available to delete" << endl;
        return;
    }
    head = head->next;
    head->prev = nullptr;
}

int main()
{
    Node *linkedList = nullptr;
    // insert two at tail
    insertAtTail(linkedList, 2);
    insertAtTail(linkedList, 3);
    // insert one at head
    insertAtHead(linkedList, 1);
    // display
    displayNodes(linkedList);
    // delete at tail
    deleteAtTail(linkedList);
    displayNodes(linkedList);
    // delete at head
    deleteAtHead(linkedList);
    displayNodes(linkedList);
    // restoring linkedlist
    insertAtTail(linkedList, 3);
    insertAtHead(linkedList, 1);
    displayNodes(linkedList);
    // printing straight
    while (linkedList->next != nullptr)
    {
        cout << linkedList->data << " ";
        linkedList = linkedList->next;
    }
    cout << linkedList->data << endl;
    // printing backwards
    while (linkedList->prev != nullptr)
    {
        cout << linkedList->data << " ";
        linkedList = linkedList->prev;
    }
    cout << linkedList->data << endl;

    return 0;
}

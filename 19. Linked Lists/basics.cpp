#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
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
        temp = temp->next;
    temp->next = new Node(data);
}

// insert at head

void insertAtHead(Node *&node, int data)
{
    Node *temp = new Node(data);
    temp->next = node;
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

// search for an element in linked list
int search(Node *&node, int key)
{
    Node *temp = node;
    int ind = 0;
    while (temp != nullptr)
    {
        if (key == temp->data)
            return ind;
        temp = temp->next;
        ind += 1;
    }
    return -1;
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
}

// reversing linked list
void reverseLinkedlist(Node *&head)
{
    // if 0 or 1 elements return
    if (head == nullptr || head->next == nullptr)
    {
        return;
    }
    // make 3 pointers : prev, curr, next
    // initialize prev pointer with null
    Node *prev = nullptr;
    // initialize curr pointer with head
    Node *curr = head;
    // initialize next pointer with second element
    Node *forward = head->next;
    // iterate curr so that it hits null
    while (curr != nullptr)
    {
        // over each iteration point, curr to prev, and change adress of curr to next, and next to next of next
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

// reverse k nodes in linked list
void reverseKNodes(Node *&head)
{
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
    // reversing linkedlist
    reverseLinkedlist(linkedList);
    displayNodes(linkedList);

    return 0;
}

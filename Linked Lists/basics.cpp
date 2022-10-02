#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertNodeAtTail(Node *head, int data)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

// doubt in insertNodeAtHead function
void insertNodeAtHead(Node *&head, int data)
{
    Node *temp = head;
    head = new Node(data);
    head->next = temp;
}

void displayNodes(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->next == nullptr)
            cout << temp->data;
        else
            cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// function for deleting passed data from linked list
// 1 2 3 4 5
void deleteNode(Node *&head, int data)
{
    Node *temp = head;
    // to check if the first node is the one to be deleted
    if (head->data == data)
    {
        head = head->next;
        return;
    }
    while (temp != nullptr)
    {

        if (temp->next->data == data)
        {
            temp->next = temp->next->next;
            return;
        }
        temp = temp->next;
    }
}

// function for deleting node at tail

void deleteNodeAtTail(Node *&head)
{
    Node *temp = head;
    if (head->next == nullptr)
    {
        head = nullptr;
        return;
    }
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
    return;
}

// function for deleting node

void deleteNodeAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

// ask jassi
void reverseNodes(Node *head)
{
}

// reverse k nodes
void reverseKNodes(Node *head, int k)
{
}

int main()
{
    Node *head = new Node(0);
    displayNodes(head);
    insertNodeAtHead(head, 1);
    insertNodeAtTail(head, 1);
    displayNodes(head);
    deleteNodeAtHead(head);
    displayNodes(head);
    return 0;
}
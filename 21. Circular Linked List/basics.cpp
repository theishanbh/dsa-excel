#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *n = new Node(data);
    if (head == nullptr)
    {
        n->next = n;
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    Node *todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}

void deletion(Node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void insertAtTail(Node *&head, int data)
{
    if (head == nullptr)
    {
        insertAtHead(head, data);
        return;
    }
    Node *n = new Node(data);
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

int main()
{
    Node *head = nullptr;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 0);
    display(head);
    deletion(head, 5);
    display(head);
    return 0;
}
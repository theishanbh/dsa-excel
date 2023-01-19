#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node *head)
{
    if (head == nullptr)
        return;
    cout << head->data << " ";
    preorder(head->left);
    preorder(head->right);
}
void postorder(Node *head)
{
    if (head == nullptr)
        return;
    preorder(head->left);
    preorder(head->right);
    cout << head->data << " ";
}
void inorder(Node *head)
{
    if (head == nullptr)
        return;
    preorder(head->left);
    cout << head->data << " ";
    preorder(head->right);
}

void levelOrderTraversal(Node *head)
{
    queue<Node *> q;
    q.push(head);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        if (temp->left != nullptr)
        {
            q.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
        q.pop();
    }
}

int main()
{
    Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);

    preorder(head);
    cout << endl;
    postorder(head);
    cout << endl;
    inorder(head);
    cout << endl;
    levelOrderTraversal(head);
}
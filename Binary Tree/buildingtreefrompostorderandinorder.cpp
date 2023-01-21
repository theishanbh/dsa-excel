#include <bits/stdc++.h>
using namespace std;

// node
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

int findpos(int inorder[], int element, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (inorder[i] == element)
            return i;
    }
    return -1;
}

Node *solve(int in[], int post[], int &index, int inorderStart, int inorderEnd, int n)
{
    if (index < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }
    int element = post[index--];
    Node *root = new Node(element);
    int position = findpos(in, element, n);

    // explanation ?
    root->right = solve(in, post, index, position + 1, inorderEnd, n);
    // explanation ?
    root->left = solve(in, post, index, inorderStart, position - 1, n);
    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    int postOrderIndex = n - 1;
    Node *ans = solve(in, post, postOrderIndex, 0, n - 1, n);
    return ans;
}

void postoder(Node *head)
{
    if (head == nullptr)
        return;
    postoder(head->left);
    postoder(head->right);
    cout << head->data << " ";
}

int main()
{
    int in[] = {4, 8, 2, 5, 1, 6, 3, 7};
    int post[] = {8, 4, 5, 2, 6, 7, 3, 1};
    int n = sizeof(in) / sizeof(in[0]);

    Node *head = buildTree(in, post, n);
    postoder(head);
    cout << endl;
    return 0;
}
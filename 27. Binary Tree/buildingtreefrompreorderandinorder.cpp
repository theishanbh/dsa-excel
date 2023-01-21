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

Node *solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n)
{
    if (index > n || inorderStart > inorderEnd)
    {
        return NULL;
    }
    int element = pre[index++];
    Node *root = new Node(element);
    int position = findpos(in, element, n);

    // explanation ?
    root->left = solve(in, pre, index, inorderStart, position - 1, n);
    // explanation ?
    root->right = solve(in, pre, index, position + 1, inorderEnd, n);
    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preOrderIndex = 0;
    Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n);
    return ans;
}

void preoder(Node *head)
{
    if (head == nullptr)
        return;
    cout << head->data << " ";
    preoder(head->left);
    preoder(head->right);
}

int main()
{
    int pre[] = {3, 9, 20, 15, 7};
    int in[] = {9, 3, 15, 20, 7};
    int n = sizeof(in) / sizeof(in[0]);

    Node *head = buildTree(in, pre, n);
    preoder(head);
    cout << endl;
    return 0;
}
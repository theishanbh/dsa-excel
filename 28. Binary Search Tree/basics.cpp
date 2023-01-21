#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
// insertion in binary search tree
node *insertBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}
// search in bST
node *searchInBst(node *root, int key)
{
    if (root == NULL)
        return NULL;
    if (root->data == key)
        return root;
    if (root->data > key)
        return searchInBst(root->left, key);
    if (root->data < key)
        return searchInBst(root->right, key);
}

// deletion in BST
node *inorderSucc(node *root)
{
    node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

node *deleteInBST(node *root, int key)
{
    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        // case 3
        node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

node *constructBST(int preorder[], int *preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
        return NULL;
    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderIdx += 1;
        if (*preorderIdx < n)
            root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        if (*preorderIdx < n)
            root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
    }
    return root;
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// sorted array to balanST
node *sortedArrayToBST(int arr[], int start, int end)
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    node *root = new node(arr[mid]);
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
    return root;
}
// check for bst
bool isBST(node *root, node *min, node *max)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);
    return (leftValid and rightValid);
}

int main()
{
    node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    // inorder traversal gives sorted bst
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderIdx = 0;
    node *root = constructBST(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);
    inorder(root);
    cout << endl;
    return 0;
}
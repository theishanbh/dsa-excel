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

int sumAtKLevel(Node *head, int k)
{
    if (head == nullptr)
        return -1;
    queue<Node *> q;
    q.push(head);
    q.push(nullptr);
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp != nullptr)
        {
            if (level == k)
                sum += temp->data;
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
        else if (temp == nullptr && !q.empty())
        {
            q.push(nullptr);
            level += 1;
        }
    }
    return sum;
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

int countNodes(Node *head)
{
    if (head == nullptr)
    {
        return 0;
    }
    return 1 + countNodes(head->left) + countNodes(head->right);
}

int sumAllNodes(Node *head)
{
    if (head == nullptr)
    {
        return 0;
    }
    return head->data + sumAllNodes(head->left) + sumAllNodes(head->right);
}

int heightOfTree(Node *head)
{
    if (head == nullptr)
        return 0;
    return max(1 + heightOfTree(head->left), 1 + heightOfTree(head->right));
}

void rightView(Node *head)
{
    if (head == nullptr)
        return;
    cout << head->data << " ";
    if (head->right != nullptr)
        rightView(head->right);
    else
        rightView(head->left);
}
void leftView(Node *head)
{
    if (head == nullptr)
        return;
    cout << head->data << " ";
    if (head->left != nullptr)
        leftView(head->left);
    else
        leftView(head->right);
}
// takes O(n^2)
int diamaterOfTree(Node *head)
{
    if (head == nullptr)
        return 0;
    int left = diamaterOfTree(head->left);
    int right = diamaterOfTree(head->right);
    int ans = heightOfTree(head->left) + heightOfTree(head->right) + 1;

    return max(ans, max(left, right));
}
// takes O(n)
// saves pain of calculating height each time
pair<int, int> diameterOfTreeOptimized(Node *head)
{
    if (head == nullptr)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameterOfTreeOptimized(head->left);
    pair<int, int> right = diameterOfTreeOptimized(head->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int buildSumTree(Node *head)
{
    if (head == nullptr)
    {
        return 0;
    }
    int a = buildSumTree(head->left);
    int b = buildSumTree(head->right);
    int c = head->data;

    head->data = a + b;

    return a + b + c;
}

pair<bool, int> isHeightBalanced(Node *head)
{
    if (head == nullptr)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = isHeightBalanced(head->left);
    pair<bool, int> right = isHeightBalanced(head->right);

    bool leftAns = left.first;
    bool rightAns = right.first;
    bool condition = (abs(left.second - right.second) <= 1);

    pair<bool, int> ans;
    ans.second = 1 + max(left.second, right.second);

    if (leftAns && rightAns && condition)
        ans.first = true;
    else
        ans.first = false;

    return ans;
}
// are two trees identical?
bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == nullptr && root2 != nullptr)
        return false;
    if (root2 != nullptr && root2 == nullptr)
        return false;
    if (root1 == nullptr && root2 == nullptr)
        return true;
    bool left = isIdentical(root1->left, root2->right);
    bool right = isIdentical(root1->right, root2->right);
    bool curr = (root1->data == root2->data);

    return curr && left && right;
}
// flatten binary tree
void flatten(Node *root)
{
    Node *curr = root;
    while (curr != nullptr)
    {
        if (curr->left)
        {
            Node *pred = curr->left;
            while (pred->right)
                pred = pred->right;
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = nullptr;
        }
        curr = curr->right;
    }
}

void solve(Node *root, int sum, int &maxSum, int len, int &maxLen)
{
    // base case
    if (root == nullptr)
    {
        if (len > maxLen)
        {
            maxLen = len;
            maxSum = sum;
        }
        else if (len == maxLen)
        {
            maxSum = max(sum, maxSum);
        }
        return;
    }

    sum = sum + root->data;

    solve(root->left, sum, maxSum, len - 1, maxLen);
    solve(root->right, sum, maxSum, len - 1, maxLen);
}

// sum of longest bloodlien of tree
int sumOfLongRootToLeafPath(Node *root)
{
    int len = 0;
    int maxLen = 0;

    int sum = 0;
    int maxSum = INT_MIN;

    solve(root, sum, maxSum, len, maxLen);
    return maxSum;
}

// lca

Node *lca(Node *root, int n1, int n2)
{
    if (root == nullptr)
        return nullptr;
    if (root->data == n1 || root->data == n2)
        return root;
    Node *leftAns = lca(root->left, n1, n2);
    Node *rightAns = lca(root->right, n1, n2);

    if (leftAns != nullptr && rightAns != nullptr)
        return leftAns;
    else if (leftAns != nullptr && rightAns == nullptr)
        return rightAns;
    else
        return nullptr;
}

void solve(Node *root, int k, int &count, vector<int> path)
{
    // base case
    if (root == nullptr)
        return;
    path.push_back(root->data);
    // left
    solve(root->left, k, count, path);
    // right
    solve(root->right, k, count, path);

    int size = path.size();
    int sum = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        sum += path[i];
        if (sum == k)
            count++;
    }

    path.pop_back();
}

int sumK(Node *root, int k)
{
    vector<int> path;
    int count = 0;
    solve(root, k, count, path);
    return count;
}

// ktch ancestor

Node *solveAncestor(Node *root, int &k, int node)
{
    if (root == nullptr)
        return nullptr;
    if (root->data == node)
        return root;
    Node *leftAns = solveAncestor(root->left, k, node);
    Node *rightAns = solveAncestor(root->right, k, node);

    if (leftAns != nullptr && rightAns == nullptr)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX;
            return root;
        }
        return leftAns;
    }
    if (rightAns != nullptr && leftAns == nullptr)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }

    return nullptr;
}

int kthAncestor(Node *root, int k, int node)
{
    Node *ans = solveAncestor(root, k, node);
    if (ans == nullptr)
        return -1;
    else
        return ans->data;
}

// find distance between 2 nodes

int solve(Node *root, int val)
{
    if (!root)
        return 0;
    if (root->data == val)
        return 1;
    int a = solve(root->left, val);
    int b = solve(root->right, val);
    if (!a and !b)
        return 0;
    else
        return a + b + 1;
}

int findDistance(Node *root, int a, int b)
{
    Node *LCA = lca(root, a, b);
    int x = solve(LCA, a);
    int y = solve(LCA, b);
    return x + y - 2;
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
    head->right->right->right = new Node(8);
    // head->right->right->right->right = new Node(9);

    // preorder(head);
    // cout << endl;
    // postorder(head);
    // cout << endl;
    // inorder(head);
    // cout << endl;
    // levelOrderTraversal(head);
    // cout << endl;

    // cout << sumAtKLevel(head, 1) << endl;

    // cout << "total nodes : " << countNodes(head) << endl;

    // cout << "total sum of Nodes : " << sumAllNodes(head) << endl;

    // cout << "height of tree : " << heightOfTree(head) << endl;

    // rightView(head);
    // leftView(head);

    // cout << "Diameter  : " << diamaterOfTree(head) << endl;
    // Node *sumTree = head;
    // buildSumTree(sumTree);
    // levelOrderTraversal(sumTree);
    // cout << endl;

    // is tree balanced
    pair<bool, int> p = isHeightBalanced(head);
    if (p.first)
        cout << "Height balanced" << endl;
    else
        cout << "Height not balanced" << endl;
}
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int data;
    struct ListNode *left, *right;
};

vector<int> preOrderTrav(ListNode *curr)
{
    vector<int> preOrder;
    if (curr == NULL)
        return preOrder;

    stack<ListNode *> s;
    s.push(curr);

    while (!s.empty())
    {
        ListNode *topNode = s.top();
        preOrder.push_back(topNode->data);
        s.pop();
        if (topNode->right != NULL)
            s.push(topNode->right);
        if (topNode->left != NULL)
            s.push(topNode->left);
    }
    return preOrder;
}

struct ListNode *newNode(int data)
{
    struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main()
{

    struct ListNode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(8);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(9);
    root->right->right->right = newNode(10);

    vector<int> preOrder;
    preOrder = preOrderTrav(root);

    cout << "The preOrder Traversal is : ";
    for (int i = 0; i < preOrder.size(); i++)
    {
        cout << preOrder[i] << " ";
    }
    return 0;
}
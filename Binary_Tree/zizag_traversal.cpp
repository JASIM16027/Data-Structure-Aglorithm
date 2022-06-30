#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};

struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void zizagTraversal(Node *root, vector<vector<int>> &ans)
{

    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    bool flag = true;
    while (q.empty() == false)
    {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++)
        {
            Node *n = q.front();
            q.pop();
            int index = (flag)?i:(size-i-1);
            level[index] = n->data;

            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
    
        ans.push_back(level);

        }
    }
    int main()
    {
        struct Node *root = newNode(7);
        root->left = newNode(5);
        root->right = newNode(4);
        root->left->left = newNode(8);
        root->left->right = newNode(9);
        root->right->left = newNode(10);
        root->right->right = newNode(12);
        vector<vector<int>> ans;
        zizagTraversal(root, ans);
        for (int i = 0; i < ans.size(); i++)
        {
            for (auto it : ans[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
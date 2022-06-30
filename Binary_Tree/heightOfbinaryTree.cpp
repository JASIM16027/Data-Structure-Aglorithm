#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int data;
    /* data */
    struct ListNode* left, *right;
};

struct ListNode* newNode(int data){
    struct ListNode* node = (struct ListNode*)malloc(sizeof (struct ListNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);

}

int heightofTree(ListNode *root){

    if (root==NULL) return 0;
    int left = heightofTree(root->left);
    int right = heightofTree(root->right);

    return 1+max(left,right);
}

int diameterofbinaryTree(ListNode *root, int &mx){

    if (root==NULL) return 0;
    int left = heightofTree(root->left);
    int right = heightofTree(root->right);
    mx = max(mx, left+right);

    return 1+max(left,right);
}

int main(){

    struct ListNode* root = newNode(-10);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    int mx = 0;

    int res = heightofTree(root);
    cout<<res<<endl;
    diameterofbinaryTree(root,mx);
    cout<<mx<<endl;

    return 0;

}



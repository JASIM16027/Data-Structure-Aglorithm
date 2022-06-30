#include <bits/stdc++.h>

using namespace std;

struct ListNode {
  int data;
  struct ListNode * left, * right;
};

struct ListNode * newNode(int data) {
  struct ListNode * node = (struct ListNode *) malloc(sizeof(struct ListNode));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}


int findMaxPathSum(ListNode * root, int & res) {
  if (root == NULL) return 0;

  int left= findMaxPathSum(root -> left, res);
  int right =findMaxPathSum(root -> right, res);
  int val = root -> data;
  int temp = max(max(left,right)+val, val);
  int ans = max(temp,left+right+val);
  res = max(res,ans);
  return temp;

}

int maxPathSum(ListNode * root) {
  int maxi = INT_MIN;
  findMaxPathSum(root, maxi);
  return maxi;

}


int main() {

  struct ListNode * root = newNode(-10);
  root -> left = newNode(9);
  root -> right = newNode(20);
  root -> right -> left = newNode(15);
  root -> right -> right = newNode(7);

  int answer = maxPathSum(root);
  cout << "The Max Path Sum for this tree is " << answer;

  return 0;
}
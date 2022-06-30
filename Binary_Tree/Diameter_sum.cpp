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


int findDiameter(ListNode * root, int & maxi) {
  if (root == NULL) return 0;

  int left = findDiameter(root -> left, maxi);
  int right =findDiameter(root -> right, maxi);
  int temp = 1+ max(left, right);
  maxi = max(maxi, left+right);
  return temp;

}

int Diameter(ListNode * root) {
  int maxi = INT_MIN;
  findDiameter(root, maxi);

  //cout<<maxi<<" ";
  return maxi;

}


int main() {

  struct ListNode * root = newNode(-10);
  root -> left = newNode(9);
  root -> right = newNode(20);
  root -> right -> left = newNode(15);
  root -> right -> right = newNode(7);

  int answer = Diameter(root);
  cout << answer;

  return 0;
}
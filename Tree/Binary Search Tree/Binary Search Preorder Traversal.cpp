#include <bits/stdc++.h>
using namespace std;

struct node {
  int data;
  node *left = nullptr;
  node *right = nullptr;
};

node* insert(node* root, int data) {
  if (root == nullptr) {
    node* newnode = new node;
    newnode->data = data;
    return newnode;
  }
  
  if (data < root->data) {
    root->left = insert(root->left, data);
  } else {
    root->right = insert(root->right, data);
  }

  return root;
}

void preorder(node* tree) {
  if (tree != nullptr) {
    cout << tree->data << " -> ";
    preorder(tree->left);
    preorder(tree->right);
  }
}

int main() {
  node* root = nullptr;
  int data;

  cout << "Enter values for the Binary Search Tree (enter -1 to stop):\n";
  while (true) {
    cout << "Enter node value: ";
    cin >> data;

    if (data == -1) break;

    root = insert(root, data);
  }

  cout << "\nPreorder Traversal:\n";
  preorder(root);
  cout << "NULL\n";

  return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* createNode() {
    int value;
    cout << "Enter node value (-1 for NULL): ";
    cin >> value;
    if (value == -1) return nullptr;

    Node* newNode = new Node(value);
    cout << "Enter left child of " << value << ": ";
    newNode->left = createNode();
    cout << "Enter right child of " << value << ": ";
    newNode->right = createNode();

    return newNode;
}

void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " -> ";
    preorder(root->left);
    preorder(root->right);
}



int main() {
    cout << "Create the binary tree:\n";
    Node* root = createNode();

    cout << "\nPreorder Traversal:\n";
    preorder(root);
    cout << "NULL\n";


    return 0;
}



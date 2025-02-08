#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

//insert nodes
Node* insertNode() {
    int value;
    cout << "Enter node value (-1 for NULL): ";
    cin >> value;
    if (value == -1) return nullptr;

    Node* newNode = new Node(value);
    cout << "Enter left child of " << value << ": ";
    newNode->left = insertNode();
    cout << "Enter right child of " << value << ": ";
    newNode->right = insertNode();

    return newNode;
}

// Preorder traversal
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " -> ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    cout << "Create the binary tree:\n";
    Node* root = insertNode();

    cout << "\nPreorder Traversal:\n";
    preorder(root);
    cout << "NULL\n";

    return 0;
}

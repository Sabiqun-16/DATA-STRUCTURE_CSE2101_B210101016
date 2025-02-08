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

// Insert nodes
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

// Postorder traversal
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " -> ";
}

int main() {
    cout << "Create the binary tree:\n";
    Node* root = insertNode();

    cout << "\nPostorder Traversal:\n";
    postorder(root);
    cout << "NULL\n";

    return 0;
}

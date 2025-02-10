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

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " -> ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int value;

    cout << "Enter the root node value: ";
    cin >> value;
    root = new Node(value);

    char choice;
    do {
        cout << "Enter a value to insert into the tree: ";
        cin >> value;
        root = insert(root, value);

        cout << "Do you want to insert another node? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nInorder Traversal after insertion:\n";
    inorder(root);
    cout << "NULL\n";

    return 0;
}

#include <iostream>

// Define a binary tree node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(NULL), right(NULL) {}
};

// Function to perform an in-order tree traversal
void inOrderTraversal(Node* root) {
    if (root == NULL) {
        return; // Base case: empty tree or leaf node
    }

    // Recursively traverse the left subtree
    inOrderTraversal(root->left);

    // Visit the current node
    std::cout << root->data << " ";

    // Recursively traverse the right subtree
    inOrderTraversal(root->right);
}

int main() {
    // Create a simple binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Perform an in-order traversal starting from the root
    std::cout << "In-order traversal: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    // Clean up the allocated memory (not shown in detail here)

    return 0;
}


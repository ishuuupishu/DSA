#include <iostream>

// Define a binary tree node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(NULL), right(NULL) {}
};

// Function to perform a pre-order tree traversal
void preOrderTraversal(Node* root) {
    if (root == NULL) {
        return; // Base case: empty tree or leaf node
    }

    // Visit the current node
    std::cout << root->data << " ";

    // Recursively traverse the left subtree
    preOrderTraversal(root->left);

    // Recursively traverse the right subtree
    preOrderTraversal(root->right);
}

int main() {
    // Create a simple binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Perform a pre-order traversal starting from the root
    std::cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    std::cout << std::endl;

    // Clean up the allocated memory (not shown in detail here)
    // Don't forget to deallocate memory to avoid memory leaks

    return 0;
}

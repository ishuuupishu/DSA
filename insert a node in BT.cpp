#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(NULL), right(NULL) {}
};

Node* insert(Node* node, int data) {
    if (node == NULL) return new Node(data);

    if (data < node->data) {
        if (node->left == NULL)
            node->left = new Node(data);
        else
            insert(node->left, data);
    } else if (data > node->data) {
        if (node->right == NULL)
            node->right = new Node(data);
        else
            insert(node->right, data);
    }

    return node;
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Elements of the tree (inorder traversal): ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}


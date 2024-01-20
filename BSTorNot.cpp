#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

bool isBST(Node* root, Node* min = NULL, Node* max = NULL)
{
    if (root == NULL)
        return true;

    if ((min != NULL && root->data <= min->data) || (max != NULL && root->data >= max->data)){
        return false;
    }

    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);

    return leftValid && rightValid;
}

int main()
{
    Node* root1 = new Node(10);
    root1->left = new Node(5);
    root1->right = new Node(15);
    root1->left->left = new Node(2);
    root1->left->right = new Node(8);
    root1->right->right = new Node(20);


    if (isBST(root1, NULL, NULL))
    {
        cout << "Valid BST" << endl;
    }
    else
    {
        cout << "Invalid BST" << endl;
    }

    return 0;
}

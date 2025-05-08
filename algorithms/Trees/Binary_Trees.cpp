#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int data);
void inorder(TreeNode* root);
void preorder(TreeNode* root);
void postorder(TreeNode* root);
int height(TreeNode* root);
bool isBalanced(TreeNode* root);


signed main(){
    ios_base::sync_with_stdio(false); // Disable synchronization with C I/O
    cin.tie(nullptr); // Untie cin from cout
    cout.tie(nullptr); // Untie cout from cin

    int numNodes; cin >> numNodes; // Read the number of nodes in the binary tree
    TreeNode* root = nullptr; // Initialize the root of the binary tree
    for (int i = 0; i < numNodes; i++) {
        int data; cin >> data; // Read the data for each node
        root = insert(root, data); // Insert the node into the binary tree
    }
   
    cout << "Inorder Traversal: "; // Print the inorder traversal of the binary tree
    inorder(root);
    cout << "Height of the tree: " << height(root) << endl; // Print the height of the binary tree
    return 0;
}


// Function to insert a new node in the binary tree
TreeNode* insert(TreeNode* root, int data) {
    if (root == nullptr) {
        return new TreeNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}
// Function to perform inorder traversal of the binary tree
void inorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// Function to perform preorder traversal of the binary tree
void preorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
// Function to perform postorder traversal of the binary tree
void postorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
// Function to find the height of the binary tree
int height(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

// Function to check if the binary tree is balanced
bool isBalanced(TreeNode* root) {
    if (root == nullptr) {
        return true;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}






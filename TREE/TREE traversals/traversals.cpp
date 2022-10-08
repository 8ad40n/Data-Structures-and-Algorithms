// Tree traversal in C++

#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *left, *right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

// Preorder traversal
void preorderTraversal(struct Node* root) {
  if (root == NULL){
    return;
  }
    
  cout << root->data << "->";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct Node* root) {
  if (root == NULL){
    return;
  } 

  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout << root->data << "->";
}

// Inorder traversal
void inorderTraversal(struct Node* root) {
  if (root == NULL){
    return;
  }
    
  inorderTraversal(root->left);
  cout << root->data << "->";
  inorderTraversal(root->right);
}

/*

             1
            / \
          12   9
         /  \
        5    6

*/
int main() {
  struct Node* root = new Node(30);
  root->left = new Node(20);
  root->right = new Node(40);
  root->left->left = new Node(15);
  root->left->right = new Node(25);
  root->left->left->left = new Node(5);
  root->left->left->right = new Node(18);
  root->right->left = new Node(35);
  root->right->right = new Node(50);
  root->right->right->left = new Node(45);
  root->right->right->right = new Node(60);

  cout << "\nPreorder traversal ";
  preorderTraversal(root);
  cout << "\nInorder traversal ";
  inorderTraversal(root);

  cout << "\nPostorder traversal ";
  postorderTraversal(root);
}
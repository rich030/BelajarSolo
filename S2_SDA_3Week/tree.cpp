#include <iostream>
#include <vector>
using namespace std;

// node
struct Tnode{
    int data;
    struct Tnode *left;
    struct Tnode *right;
    Tnode (int data){
        this->data = data;
        left = right = NULL;
    }
};

void preorder(struct Tnode *node){
    if (node == NULL)
    return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

int main(){
    struct Tnode *root = new Tnode(57);
    root->left = new Tnode(32);
    root->left->left = new Tnode(24);
    root->left->right = new Tnode(48);
    root->left->right->left = new Tnode(39);
    root->left->right->left->left = new Tnode(35);
    root->left->right->left->right = new Tnode(43);
    root->right = new Tnode(78);
    root->right->right = new Tnode(85);
    root->right->right->left = new Tnode(81);
    root->right->right->right = new Tnode(96);
    root->right->right->right->left = new Tnode(90);
    cout << "Preorder Traversal : " << endl;
    preorder(root);
    cout << endl;
}
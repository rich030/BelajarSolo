#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *left;
    Node *right;

    Node(int in){
        value = in;
        left = nullptr;
        right = nullptr;
    }
};

class BST{
private:
    Node *root;

public:
    BST(){
        root = nullptr;
    }

    /* Masukkan fungsi insert disini */
    void insert(int in){
        if (root == nullptr){
            Node *newnode = new Node(in);
            root = newnode;
        }
        Node *obj1 = root;
        Node *obj2 = nullptr;

        while (obj1){
            obj2 = obj1;
            if (in < obj1->value){
                obj1 = obj1->left;
            }
            else{
                obj1 = obj1->right;
            }
        }

        Node *newnode = new Node(in);

        if (in < obj2->value){
            obj2->left = newnode;
        }
        else if (in > obj2->value){
            obj2->right = newnode;
        }
    }

    /* Masukkan fungsi search disini */
    Node *search(int in){
        Node *obj = root;
        while (obj) {
            if (in < obj->value){
                obj = obj->left;
            }
            else if (in > obj->value){
                obj = obj->right;
            }
            else if (in == obj->value){
                return obj;
            }
            else{
                return nullptr;
            }
        }
        return nullptr;
    }

    /* Masukkan fungsi depth disini */
    int depth(int in){
        int depth = 1;
        Node *obj = root;
        while (obj) {
            if (in < obj->value){
                obj = obj->left;
                depth++;
            }
            else if (in > obj->value){
                obj = obj->right;
                depth++;
            }
            else if (in == obj->value){
                return depth;
            }
            else{
                return -1;
            }
        }
        return -1;
    }


};

int main(){
    BST *bst = new BST;
    int i, n, temp;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> temp;
        if (temp == 1){
            cin >> temp;
            bst->insert(temp);
        }
        else if (temp == 2){
            cin >> temp;
            cout << ((bst->search(temp) == nullptr) ? "tidak ada\n" : "ada\n");
        }
        else if (temp == 3){
            cin >> temp;
            cout << bst->depth(temp) << "\n";
        }
    }
}
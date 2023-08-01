#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class node{
    private:
    int data;
    node* left;
    node* right;

    public:
    node(int input){
        this->left = NULL;
        this->right = NULL;
        this->data = input;
    }
};

class binaryTree{
    private:
    node* root;

    public:
    binaryTree(int data){
        this->root = new node(data);
    }
};

void main(){
    binaryTree *bt = new binaryTree(1);
}
#include <iostream>
#include <stack>
#include <queue>

class node{
    private:
    int data;
    node* left;
    node* right;

    public:
    // struct node* createNode(int input){
    //     struct node* new_node = new node()
    // }
    node(int input){
        this->left = NULL;
        this->right = NULL;
        this->data = input;
    }
}
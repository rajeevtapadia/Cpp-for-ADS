#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int input){
        this->left = NULL;
        this->right = NULL;
        this->data = input;
    }
};

class binaryTree{
    public:
    node* root;

    binaryTree(int data){
        this->root = new node(data);
    }
    node* insertLevelOrder(node* root, vector<int> arr, int index, int arrSize){
        if(index<arrSize){
            node* temp = new node(arr.at(index));
            root = temp;
        root->left = insertLevelOrder(root->left, arr, (2*index+1), arrSize);
        root->right = insertLevelOrder(root->right, arr, (2*index+2), arrSize);
        }
        return root;
    }
    void inorderNR(){
        if(this->root == NULL){
            cout<<"Tree is empty"<<endl;
            return;
        }
        stack<node*> st;
        node* current = this->root;
        while(current != NULL || !st.empty()){
            while(current != NULL){
                st.push(current);
                current = current->left;
            }
            current = st.top();
            st.pop();
            cout<<current->data<<" ";
            current = current->right;
        }
        cout<<endl;
    }

};

int main(){
    binaryTree *bt = new binaryTree(1);

    vector<int> arr = {1,2,3,4,5,6,7};
    bt->root = NULL;
    bt->root = bt->insertLevelOrder(bt->root, arr, 0, arr.size());

    bt->inorderNR();
    return 0;
}
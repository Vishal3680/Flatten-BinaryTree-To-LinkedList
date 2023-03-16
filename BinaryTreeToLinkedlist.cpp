//Flatten Binary Tree to linked list;
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * left ;
    Node * right;
    Node(int val ){
        this->data = val;
        this->left = this->right = NULL;
    }
};
  void flatten(Node *root)
    {
        //code here
        Node * curr = root;
       while(curr != NULL){
           
           if(curr->left){
               Node * pred = curr->left;
               while(pred->right != NULL)
                  pred = pred->right;
                
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
           }
           curr = curr->right;
       }
    }
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    int h(Node* root){
        if(root==NULL){
            return 0;
        }
        
        int left=h(root->left);
        int right=h(root->right);
        
        return max(left,right)+1;
    }
    bool isBalanced(Node* root) {
        if(root==NULL) return true;
        
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        
        int third=abs(h(root->left)-h(root->right))<=1;
        
        if(left && right && third){
            return true;
        }else{
            return false;
        }
        
    }
};
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  
    pair<bool, int> isSumTree2(Node* root){
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        
        if(root->left==NULL && root->right==NULL){
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        
         pair<bool, int> leftAns=isSumTree2(root->left);
         pair<bool, int> rightAns=isSumTree2(root->right);
         
         bool left=leftAns.first;
         bool right=rightAns.first;
         
         bool cond= root->data== leftAns.second+rightAns.second;
         
         pair<bool,int> ans;
         
         if(left && right && cond){
             ans.first=true;
             ans.second=2*root->data;
         }
         
         return ans;
        
    }
    bool isSumTree(Node* root) {
       return isSumTree2(root).first;
        
    }
};
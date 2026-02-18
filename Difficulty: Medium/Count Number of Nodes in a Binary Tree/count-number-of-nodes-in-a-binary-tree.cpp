// User function Template for C++

class Solution {
  public:
    int countNodes(Node* root) {
        if(root==NULL) return 0;
        
        int left=countNodes(root->left);
        int right=countNodes(root->right);
        
        return left+right+1;
    }
};
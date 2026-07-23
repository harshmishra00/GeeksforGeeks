class Solution {
  public:
    void preorder(Node* root, vector<int> &ans) {
        if (root == NULL)
            return;

        ans.push_back(root->data);   // Visit root
        preorder(root->left, ans);   // Traverse left
        preorder(root->right, ans);  // Traverse right
    }

    vector<int> preOrder(Node* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};

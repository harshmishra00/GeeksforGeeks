// Function to return the level order traversal of a BST.
vector<int> levelOrder(struct Node* root) {
    vector<int> ans;
    if (root == NULL) return ans;
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        ans.push_back(curr->data);
        
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        
    }
    return ans;
}
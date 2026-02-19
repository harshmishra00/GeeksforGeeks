/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    bool isIdentical(Node* p, Node* q){
        if (p==NULL || q==NULL){
            return p==q;
        }
        
        return p->data==q->data && isIdentical(p->left,q->left) && isIdentical(p->right,q->right);
    }
    bool isSubTree(Node* T, Node* S) {
        if(T==NULL || S==NULL) return T==S;
        
        if(T->data == S->data && isIdentical(T,S)) return true;
        
        return isSubTree(T->left, S) || isSubTree(T->right, S);
    }
};
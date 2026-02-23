/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        if(r1==NULL && r2==NULL){
            return true;
        }
        
        if(!r1 || !r2){
            return false;
        }
        
        bool leftt=isIdentical(r1->left,r2->left);
        bool rightt=isIdentical(r1->right,r2->right);
        bool val=r1->data==r2->data;
        
        if(leftt && rightt && val){
            return true;
        }else{
            return false;
        }
    }
};
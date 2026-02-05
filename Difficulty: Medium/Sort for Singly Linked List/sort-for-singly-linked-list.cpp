/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* insertionSort(struct Node* head) {
        Node* temp=head;
        vector<int> vec;
        while(temp!=NULL){
            vec.push_back(temp->data);
            temp=temp->next;
        }
        
        sort(vec.begin(),vec.end());
        Node* newHead=new Node(vec[0]);
        Node* temp2=newHead;
        for(int i=1;i<vec.size();i++){
            temp2->next=new Node(vec[i]);
            temp2=temp2->next;
        }
        return newHead;
    }
};
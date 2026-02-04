/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* l1) {
        Node *temp=l1;
    vector<int>arr;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }

    sort(arr.begin(),arr.end());
    Node* newHead=new Node(arr[0]);
    Node* curr=newHead;
    for(int i=1;i<arr.size();i++){
        Node* newNode=new Node(arr[i]);
        curr->next=newNode;
        curr=curr->next;
    }
    return newHead;
    }
};
class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        int n=arr.size();
        int x,z;
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                x=i;
                break;
            }else{
                x=-1;
            }
        }
        
        for(int i=n-1;i>=0;i--){
            if(arr[i]==key){
                z=i;
                break;
            }else{
                z=-1;
            }
        }
        
        return {x,z}; 
        
    }
};
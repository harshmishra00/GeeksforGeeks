class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n=arr.size();
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<k;i++){
            if(arr[i]<0){
                q.push(i);
            }
        }
        if(!q.empty()){
            ans.push_back(arr[q.front()]);
        }else{
            ans.push_back(0);
        }
        
        int left=1;
        int right=k;
        
        while(right<n){
            if(arr[right]<0){
                q.push(right);
            }
            
            while(!q.empty() && q.front()<left){
                q.pop();
                
            }
            if(!q.empty()){
                ans.push_back(arr[q.front()]);
            }else{
                ans.push_back(0);
            }
            left++;
            right++;
        }
        return ans;
        
    }
};
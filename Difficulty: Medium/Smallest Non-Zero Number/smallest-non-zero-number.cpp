class Solution {
  public:
    int f(long long int a,vector<int>& arr,int maxi){
        for(auto it:arr){
            if(a>it){
                a=a+(a-it);
            }else{
                a=a-(it-a);
            }
            // cout<<a<<endl;
            if(a>=maxi){
                return 1;
            }
            if(a<0){
                return 0;
            }
        }
        return 1;
        
    }
    int find(vector<int>& arr) {
        // code here
        int ans=0;
        int maxi=0;
        for(auto it:arr){
            maxi=max(maxi,it);
        }
        
        int low =0;
        int high=maxi;
        
        while(high>=low){
            int mid = (high+low)/2;
            // mid = 1000;
            int a = f(mid,arr,maxi);
            // cout<<a<<" "<<mid<<" "<<endl;
            if(a==0){
                low=mid+1;
            }else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
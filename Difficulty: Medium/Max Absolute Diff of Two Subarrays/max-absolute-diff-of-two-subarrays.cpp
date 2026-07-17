class Solution {
  public:
    int maxDiffSubArrays(vector<int>& arr) {
      int n=arr.size();
      int mini=arr[0];
      int maxi=arr[0];
      int ans1=arr[0];
      int ans2=arr[0];
      vector<int> left_max(n),left_min(n);
      left_max[0]=ans1;
      left_min[0]=ans2;
      for(int i=1;i<arr.size();i++){
          int o1=arr[i];
          int o2=maxi+arr[i];
          maxi=max(o1,o2);
          ans1=max(maxi,ans1);
          left_max[i]=ans1;
      }
      for(int i=1;i<arr.size();i++){
          int o1=arr[i];
          int o2=mini+arr[i];
          mini=min(o1,o2);
          ans2=min(mini,ans2);
          left_min[i]=ans2;
      }
      
      mini=arr[n-1];
      maxi=arr[n-1];
      ans1=arr[n-1];
      ans2=arr[n-1];
      vector<int> right_max(n),right_min(n);
      right_max[n-1]=ans1;
      right_min[n-1]=ans2;
      
      for(int i=n-2;i>=0;i--){
        int o1=arr[i];
        int o2=maxi+arr[i];
        maxi=max(o1,o2);
        ans1=max(maxi,ans1);
        right_max[i]=ans1;
      }
      for(int i=n-2;i>=0;i--){
        int o1=arr[i];
        int o2=mini+arr[i];
        mini=min(o1,o2);
        ans2=min(mini,ans2);
        right_min[i]=ans2;
      }
      int diff=0;
      for(int i=0;i<n-1;i++){
        int op1=abs(left_max[i]-right_min[i+1]);
        int op2=abs(left_min[i]-right_max[i+1]);
        diff = max({diff,op1,op2});
      }
      return diff;
    }
};
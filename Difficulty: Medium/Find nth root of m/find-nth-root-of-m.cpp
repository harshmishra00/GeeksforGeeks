class Solution {
  public:
    long long power(int mid, int n, int m){
        long long pro=1;
        for(int i=0;i<n;i++){
            pro*=mid;
            if(pro>m){
                return pro;
            }
        }
        return pro;
    }
    int nthRoot(int n, int m) {
        if(m==0) return 0;
        // Code here
        int left=1;
        int right=m;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            long long x= power(mid,n,m);
            if(x==m){
                return mid;
            }else if(x>m){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return -1;
        
    }
};
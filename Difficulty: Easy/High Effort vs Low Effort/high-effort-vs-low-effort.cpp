class Solution {
  public:
    int maxTask(vector<int>& h, vector<int>& l) {
        int n=h.size();
        if(n==0)
            return 0;
        int none=0;
        int low=l[0];
        int high=h[0];
        for(int i=1;i<n;i++){
           int prevNone=none;
           int prevlow=low;
           int prevhigh=high;
           int bestprev=max(prevNone,max(prevlow,prevhigh));
           
           int currNone=bestprev;
           int currlow=bestprev+l[i];
           int currhigh=prevNone+h[i];
           
           none=currNone;
           low=currlow;
           high=currhigh;
        }
        return max(none,max(low,high));
    }
};
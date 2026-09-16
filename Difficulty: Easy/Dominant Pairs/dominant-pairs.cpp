class Solution {
public:
    int dominantPairs(vector<int>& arr) {

        int n = arr.size();
        vector<int> fh, sh;

        for (int i = 0; i < n / 2; i++)
            fh.push_back(arr[i]);
        for (int i = n / 2; i < n; i++)
            sh.push_back(arr[i]);

        sort(fh.begin(), fh.end());
        sort(sh.begin(), sh.end());

        int res = 0;

        for (auto it : sh) {
            int pos = lower_bound(fh.begin(), fh.end(), it * 5) - fh.begin();
            res += (fh.size() - pos);
        }

        return res;
    }
};
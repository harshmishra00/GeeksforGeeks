class Solution {
public:
    int cntSubarrays(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int x : arr) {
            sum += x;

            if (mp.count(sum - k))
                count += mp[sum - k];

            mp[sum]++;
        }

        return count;
    }
};
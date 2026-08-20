class Solution {
public:
    int lower(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        int ans = arr.size();

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] >= target) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }

    int upper(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        int ans = arr.size();

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] > target) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }

    vector<int> find(vector<int>& arr, int x) {
        int first=lower(arr,x);
        int last=upper(arr,x)-1;
        
        if (first == arr.size() || first > last)
        return {-1, -1};
        
        return {first,last};
    }
};
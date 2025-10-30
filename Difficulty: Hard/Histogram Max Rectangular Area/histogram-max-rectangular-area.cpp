class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        stack<int> st;
        int maxArea = 0;
        
        int i = 0;
        while (i < n) {
            if (st.empty() || arr[st.top()] <= arr[i]) {
                st.push(i++);
            } else {
                int top = st.top();
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, arr[top] * width);
            }
        }
        
        while (!st.empty()) {
            int top = st.top();
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, arr[top] * width);
        }
        
        return maxArea;
    }
};

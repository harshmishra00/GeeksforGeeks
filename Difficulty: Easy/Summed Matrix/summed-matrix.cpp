class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        long long lower = max(1LL, q - n);
        long long upper = min(n, q - 1);
        if (upper < lower) return 0;
        return upper - lower + 1;
    }
};

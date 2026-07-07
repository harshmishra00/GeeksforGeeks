class Solution:
    def largestArea(self, n, m, arr):
        # code here
        rows = [0, n + 1]
        cols = [0, m + 1]
        for r, c in arr:
            rows.append(r)
            cols.append(c)
            
        rows.sort()
        cols.sort()
        
        max_r = max_c = 0
        
        for r in range(1, len(rows)):
            max_r = max(rows[r] - rows[r-1] - 1, max_r)   

        for c in range(1, len(cols)):
            max_c = max(max_c, cols[c] - cols[c-1] - 1)

        return max_r * max_c
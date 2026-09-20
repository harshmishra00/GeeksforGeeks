class Solution:
    def largestSubsquare(self, mat):
        n = len(mat)
        right = [[0] * n for _ in range(n)]
        down = [[0] * n for _ in range(n)]

        ans = 0

        for i in range(n - 1, -1, -1):
            for j in range(n - 1, -1, -1):
                if mat[i][j] == 'X':
                    right[i][j] = 1 + (right[i][j + 1] if j + 1 < n else 0)
                    down[i][j] = 1 + (down[i + 1][j] if i + 1 < n else 0)

        for i in range(n):
            for j in range(n):
                size = min(right[i][j], down[i][j])

                while size > ans:
                    if (right[i + size - 1][j] >= size and
                        down[i][j + size - 1] >= size):
                        ans = size
                        break
                    size -= 1

        return ans
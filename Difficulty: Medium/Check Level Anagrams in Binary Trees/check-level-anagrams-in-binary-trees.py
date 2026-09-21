from collections import deque

class Solution:
    def areAnagrams(self, root1, root2):
        def levels(root):
            q, res = deque([root]), []
            while q:
                cur = []
                for _ in range(len(q)):
                    node = q.popleft()
                    cur.append(node.data)
                    if node.left: q.append(node.left)
                    if node.right: q.append(node.right)
                res.append(sorted(cur))
            return res

        return levels(root1) == levels(root2)
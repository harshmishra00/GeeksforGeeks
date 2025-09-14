#User function Template for python3
from collections import Counter

class Solution:
    #Function to check if b is a subset of a.
    def isSubset(self, a, b):
        return True if not (Counter(b) - Counter(a)) else False

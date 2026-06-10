class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        count_s = {}
        count_t = {}
        for i in range(len(s)):
            value_s = s[i]
            value_t = t[i]

            if value_s in count_s:
                count_s[value_s] += 1
            else:
                count_s[value_s] = 1

            if value_t in count_t:
                count_t[value_t] += 1
            else:
                count_t[value_t] = 1
        
        return count_s == count_t

            


# TC = O(N)
# SC = O(1)
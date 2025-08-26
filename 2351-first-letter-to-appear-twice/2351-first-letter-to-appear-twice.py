class Solution(object):
    def repeatedCharacter(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = {}

        for char in s:
            if char in res:
                return char
            else:
                res[char]=1
        
class Solution(object):
    def maxScore(self, s):
        """
        :type s: str
        :rtype: int
        """
        maxScore = left_zero = 0
        right_ones = s.count('1')

        for i in range(len(s)-1):
            left_zero += s[i] == '0'
            right_ones -= s[i] == '1'
            maxScore = max(maxScore, left_zero + right_ones) 
        return maxScore
        
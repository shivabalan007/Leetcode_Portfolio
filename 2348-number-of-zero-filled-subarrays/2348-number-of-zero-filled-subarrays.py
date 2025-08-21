class Solution(object):
    def zeroFilledSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cnt = 0
        streak = 0

        for i in nums:
            if i==0:
                streak +=1
                cnt += streak
            else:
                streak = 0
            
        return cnt


        
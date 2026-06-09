class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        fre = {}
        for n in nums:
            if n in fre:
                fre[n] += 1
                return True
            else:
                fre[n] = 1
        return False

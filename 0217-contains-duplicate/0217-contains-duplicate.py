class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        fre = {}
        for n in nums:
            if n in fre:
                fre[n] += 1
            else:
                fre[n] = 1
    
        if all(v == 1 for v in fre.values()):
            return False
        else:
            return True
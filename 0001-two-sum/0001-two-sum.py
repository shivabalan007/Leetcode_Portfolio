class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        for i, n in enumerate(nums):
            for j in range(i+1,len(nums)):
                if n+nums[j] == target:
                    result.extend([i,j])
                    return result
                
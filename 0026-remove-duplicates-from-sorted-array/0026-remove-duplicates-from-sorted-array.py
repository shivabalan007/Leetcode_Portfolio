class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        dup = {}
        for n in range(len(nums)-1,-1,-1):
            val = nums[n]
            if val in dup:
                dup[val] += 1
                nums.pop(n)
            else:
                dup[val] = 1
        return len(nums)

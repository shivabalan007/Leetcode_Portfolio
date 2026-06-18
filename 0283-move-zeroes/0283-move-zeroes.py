class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero = 0
        for n in range(len(nums)):
            if nums[n] != 0:
                nums[zero], nums[n] = nums[n], nums[zero]
                zero += 1

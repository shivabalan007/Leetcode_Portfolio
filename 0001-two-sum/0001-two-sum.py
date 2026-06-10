class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_key = {}
        for i in range(len(nums)):
            y = target - nums[i]
            if y in hash_key:
                return [hash_key[y],i]

            hash_key[nums[i]] = i


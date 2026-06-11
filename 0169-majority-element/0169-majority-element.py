class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        if not nums:
            return None

        fre = {}
        for n in range(len(nums)):
            v = nums[n]
            if v in fre:
                fre[v] += 1
            else:
                fre[v] = 1

        largest_ele = max(fre.items(), key=lambda x:x[1])
        return largest_ele[0]


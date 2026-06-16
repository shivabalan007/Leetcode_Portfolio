class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        maxi = 0
        count = 0

        for n in nums:
            if count == 0:
                maxi = n

            if maxi == n:
                count += 1
            else:
                count -= 1

        return maxi
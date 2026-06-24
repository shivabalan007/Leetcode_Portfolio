class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxi = 0
        buy = 0

        for sell in range(1, len(prices)):
            if prices[buy] < prices[sell]:
                profit = prices[sell] - prices[buy]
                if profit > maxi:
                    maxi = profit
            else:
                buy = sell

        return maxi
        
# TC - O(N)
# SC - O(1)

# Pattern - Two Pointer
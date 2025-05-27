class Solution(object):
    def differenceOfSums(self, n, m):
        """
        :type n: int
        :type m: int
        :rtype: int
        """
        sum1 = 0
        sum2 = 0
        for i in range(1,n+1):
            if(i%m):
                sum1 = sum1+i
            else:
                sum2 = sum2+i
        
        return sum1-sum2
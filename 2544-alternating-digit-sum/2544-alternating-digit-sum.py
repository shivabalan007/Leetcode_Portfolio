class Solution(object):
    def alternateDigitSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        pos = 0
        neg = 0
        digi = str(n)
        for i in range(len(digi)):
            if(i%2 == 0):
                pos+=int(digi[i])
            else:
                neg+=int(digi[i])
        
        return pos-neg
        
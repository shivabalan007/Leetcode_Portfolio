class Solution(object):
    def findClosest(self, x, y, z):
        """
        :type x: int
        :type y: int
        :type z: int
        :rtype: int
        """
        p1 = abs(x-z)
        p2 = abs(y-z)

        if(p1==p2):
            return 0
        
        if(p1<p2):
            return 1
        else:
            return 2
        
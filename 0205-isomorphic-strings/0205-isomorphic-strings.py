class Solution(object):
    def isIsomorphic(self, s, t):
        map1 = []
        map2 = []
        for i in s:
            map1.append(s.index(i))
        for j in t:
            map2.append(t.index(j))
        if map1==map2:
            return True
        return False
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        
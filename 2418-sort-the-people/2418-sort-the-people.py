class Solution(object):
    def sortPeople(self, names, heights):
        """
        :type names: List[str]
        :type heights: List[int]
        :rtype: List[str]
        """
        map = {}
        
        for i in range(len(heights)):
            map[heights[i]] = names[i]

        heights.sort(reverse=True)

        res=[]

        for i in heights:
            res.append(map[i])

        return res
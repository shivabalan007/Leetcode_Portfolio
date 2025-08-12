class Solution(object):
    def commonChars(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        if len(words) < 2:
            return list(words[0])

        res= []
        word1 = set(words[0])
        for char in word1:
            cnt = []
            for word in words:
                cnt.append(word.count(char))
            fre = min(cnt)
            res+= [char] * fre
        return res


        
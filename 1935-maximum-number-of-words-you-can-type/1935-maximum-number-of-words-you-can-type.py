class Solution:
    def canBeTypedWords(self, text: str, broken: str) -> int:
        word=text.split()
        cnt = 0

        for i in word:
            for j in broken:
                if j in i:
                    break
            else:
                cnt+=1
        return cnt
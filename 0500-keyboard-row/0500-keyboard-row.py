class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        r1='qwertyuiop'
        r2='asdfghjkl'
        r3='zxcvbnm'
        res = []
        for ch in words:
            ch=ch.lower()
           if ch in r1 or ch in r2 or ch in r3:
            res.append(ch)
        return res
    






class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        r1 = set("qwertyuiop")
        r2 = set("asdfghjkl")
        r3 = set("zxcvbnm")
        res = []
        for ch in words:
            first = ch.lower()
            if first[0] in r1:
                flag = 1
            elif first[0] in r2:
                flag = 2
            elif first[0] in r3:
                flag = 3
            else:
                continue

            valid = True
            for i in first:
                if(flag == 1 and i not in r1) or \
                (flag == 2 and i not in r2) or \
                (flag == 3 and i not in r3):
                 valid = False
                 break

            if valid:
                res.append(ch)
        return res

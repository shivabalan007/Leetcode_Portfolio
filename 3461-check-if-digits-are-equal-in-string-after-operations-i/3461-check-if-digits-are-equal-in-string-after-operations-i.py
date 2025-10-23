class Solution:
    def hasSameDigits(self, s: str) -> bool:
        l = len(s)
        s = list(s)

        while(l>2):
            for i in range(l-1):
                s[i] = str((int(s[i]) + int(s[i+1])) % 10)
            l -= 1
        return s[0] == s[1]


class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s = ""
        for ch in s:
            ch = ch.lower()
            if ch.isalnum():
                new_s += ch
        
        rev_s = new_s[::-1]
        return rev_s == new_s
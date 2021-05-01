class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        
        
        LastWord = s.split()
        if len(LastWord) == 0:
            return 0
        else:
            return len(LastWord[-1])
        
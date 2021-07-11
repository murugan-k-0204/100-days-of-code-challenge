class Solution:
    def countPalindromicSubsequence(self, s: str) -> int:
        res = 0
        dic  ={}
        for i in range(len(s)-2):
            try:
                dic[s[i]]+=1
            except:
                dic[s[i]] = 1
                for j in range(len(s)-1, i+1, -1):
                    if s[j] == s[i]:
                        res += len(set(s[i+1:j]))
                        break

        return res
        

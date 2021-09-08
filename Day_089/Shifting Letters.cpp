class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int si = shifts.size();
        int temp = (((int)s[si - 1] - 96) + shifts[si-1])%26 ;
        if(temp==0) s[si - 1] = (char)(26 + 96);
        else
        s[si - 1] = (char)(((((int)s[si - 1] - 96) + shifts[si-1])%26) + 96) ;
        if(s[si - 1] == '\'')
            s[si - 1] = 'z';
        for (int i = si - 2; i >= 0 ; i--)
        {
            shifts[i] =( shifts[i]+ shifts[i+1] ) % 26 ;
            temp = (((int)s[i] - 96) + shifts[i])%26 ; 
            if(temp==0) s[i] = (char)(26+ 96);
            else
            s[i] = (char)(((((int)s[i] - 96) + shifts[i])%26) + 96) ;
        }

        return s;
        
    }
};

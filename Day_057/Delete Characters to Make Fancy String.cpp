class Solution {
public:
    string makeFancyString(string s) {
        string new_str;
        if(s.size()<3) return s;
        for (int i = 0; i < s.size()-2; i++)
        {
            if(s[i] == s[i+1] && s[i+1] == s[i+2])
                continue;
            new_str += s[i];
        }
        new_str += s[s.size()-2];
        new_str += s[s.size()-1];
        return new_str;
    }
};

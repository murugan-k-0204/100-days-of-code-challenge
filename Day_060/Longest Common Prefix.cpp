class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp;
        string checker = strs[0];
        bool flag = true;
        for(int i=0;i<checker.size();i++){
            for(int j=0; j<strs.size();j++){
                if(strs[j].size()== i){
                    flag = false;
                    break;
                }
                if(checker[i]!=strs[j][i]){
                    flag = false;
                    break;
                }
            }
            if(!flag)
                break;
            lcp += checker[i];
        }
        return lcp;
    }
};

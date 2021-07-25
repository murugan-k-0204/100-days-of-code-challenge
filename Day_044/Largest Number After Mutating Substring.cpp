class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int temp;
        int go = 0;
        for (int i = 0; i < num.size(); i++)
        {
            temp = num[i] - 48;
            if(change[temp]==temp && go==0)
                continue;
            if(change[temp]>=temp ){
                char tt = change[temp] + 48;
                num[i] = tt;
                go = 1;
            }
            else if(go==1)
                break;
        }
        return num;
    }
};

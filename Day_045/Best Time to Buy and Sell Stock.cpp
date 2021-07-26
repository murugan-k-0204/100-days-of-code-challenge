class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0, temp=0,sz = prices.size();
        vector<int> mn(sz), mx(sz);
        mn[0] = prices[0];
        mx[sz-1] = prices[sz-1];
        for(int i=1;i<sz;i++){
            mn[i] = min(mn[i-1],prices[i]);
            mx[sz-1-i] = max(mx[sz-i],prices[sz-1-i]);
        }
        for (int i = 0; i < sz-1; i++)
        {
            result = max(mx[i+1]-mn[i],result);
        }
        return result;
    }
};

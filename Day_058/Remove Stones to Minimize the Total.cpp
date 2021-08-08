class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int> stones;
        long long sum=0;
        for (int pile: piles)
        {
            stones.push(pile);
            sum+=pile;
        }
        int tp;
        while(k--){
            tp = stones.top();
            stones.pop();
            sum -= tp/2;
            stones.push(tp - tp/2);
        }
        return sum;
    }
};

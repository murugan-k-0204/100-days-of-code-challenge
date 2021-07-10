class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hashtable;
        for(int i=0;i<nums.size();i++){
            hashtable[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            int second = target - nums[i];
            if(hashtable[second]){
                if(hashtable[second]==i) continue;
                return {i,hashtable[second]};
            }
        }
    return {0,0};
    }
};

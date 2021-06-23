class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int num_or=nums[0];
        for (int i = 1; i < nums.size(); i++)
            num_or|=nums[i];
        return pow(2,nums.size()-1)*num_or;

    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN,tempSum=0;
        for(int i=0;i<nums.size();i++){
            tempSum+=nums[i];
            maxSum=max(tempSum,maxSum);
            tempSum=max(0,tempSum);
        }
        return maxSum;
    }
};

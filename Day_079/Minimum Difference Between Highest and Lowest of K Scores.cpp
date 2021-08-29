class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums.size()==1) return 0;
        int ma, mi, difference = INT_MAX;
        for (int i = 0; i < nums.size() - k+1; i++)
        {
            ma = nums[i];
            mi = nums[i+k-1];
            difference = min(difference, ma-mi);
        }
        return difference;
    }
};

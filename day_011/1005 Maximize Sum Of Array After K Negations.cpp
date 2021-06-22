class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0,i=0;
        while(k!=0){
            if(i>=nums.size()) break;
            if(nums[i]==abs(nums[i])){
                if(i!=0 && (k&1)){
                    if(nums[i]>nums[i-1]){
                        nums[i-1]= -nums[i-1];
                        break;
                    }
                }
                if(k&1) nums[i]= -nums[i];
                break;
            }
            nums[i]= -nums[i];
            k--;
            i++;
        }
        for(int num: nums)
            sum+=num;
        return sum;
    }
};

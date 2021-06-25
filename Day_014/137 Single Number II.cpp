class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> results;
        int sum=0;
        for (int num : nums)
            if (num%2==0) sum+=num;

        for (int i=0;i<queries.size();i++)
        {
            int index = queries[i][1];
            if(nums[index]%2==0)
                sum -= nums[index];
            nums[index]+=queries[i][0];
            if (nums[index]%2==0)
                sum+=nums[index];
            results.push_back(sum);
        }
        return results;
    }
};

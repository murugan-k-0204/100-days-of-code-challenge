class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int result = 0,temp,cycle_length,head;
        for (int i = 0; i < nums.size(); i++)
        {
            cycle_length = 0;
            head = i;
            while(nums[head] != -1){
                temp = nums[head];
                nums[head] = -1;
                head = temp;
                cycle_length++;
            }
            result = max(result,cycle_length);
        }
        return result;
    }
};

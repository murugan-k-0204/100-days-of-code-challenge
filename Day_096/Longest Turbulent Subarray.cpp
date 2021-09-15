
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {                           
        int s = arr.size();
        vector<bool> method1(s,0);
        vector<bool> method2(s,0);

        for (int i = 0; i < s-1; i++)
        {
            if(i&1){
                if(arr[i]<arr[i+1]) method1[i] = 1;
                if(arr[i]>arr[i+1]) method2[i] = 1;
            }
            else{
                if(arr[i]<arr[i+1]) method2[i] = 1;
                if(arr[i]>arr[i+1]) method1[i] = 1;
            }
        }
        int max_Turblence = 0;
        int temp = 0;
        for (int i = 0; i < s; i++)
        {
            if(method1[i] == 0) temp = 0;
            else temp++;
            max_Turblence = max(max_Turblence, temp);
        }
        temp = 0;
        for (int i = 0; i < s; i++)
        {
            if(method2[i] == 0) temp = 0;
            else temp++;
            max_Turblence = max(max_Turblence, temp);
        }
        return max_Turblence+1;
    }
};

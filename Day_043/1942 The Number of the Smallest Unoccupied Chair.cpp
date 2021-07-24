class Solution {
public:
    bool sortByCol( const vector<int>& v1, const vector<int>& v2 ) {     
        return v1[0] < v2[0]; 
    }
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<int> chairs(10001);
        int target_arrival = times[targetFriend][0];
        int arr, leav;
        sort(times.begin(), times.end());
        for (auto fri : times)
        {
            arr = fri[0];
            leav = fri[1];
            for (int i = 0; i < 10001; i++)
            {
                if(chairs[i] <= arr){
                    if(target_arrival == arr)
                        return i;
                    chairs[i] = leav;
                    break;
                }
                else if(chairs[i]==0){
                    if(target_arrival == arr)
                        return i;
                    chairs[i] = leav;
                    break;
                }
            }
        }
        return 1;
        
    }
};

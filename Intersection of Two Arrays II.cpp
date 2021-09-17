class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            int p1 = nums1[i],p2 = nums2[j];
            if(p1==p2){
                i++; 
                j++;
                res.push_back(p1);
            }
            else if(p1 < p2) i++;
            else j++;
        }
        return res;
    }
};

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int counts[]={0,0};
        for(int i:students)
            counts[i]++;
        int k=0;
        while(k<students.size()){
            if(counts[sandwiches[k]]>0)
                counts[sandwiches[k]]-=1;
            else
                break;
            k+=1;
        }
        return students.size()-k;
    }
};

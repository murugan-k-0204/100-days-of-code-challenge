  
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        for(int i=0; i< dist.size();i++){
            dist[i] = (dist[i]+speed[i]-1)/speed[i];
        }
        sort(dist.begin(),dist.end());
        
        int last = dist[0];
        int monsters=1;
        
        for (int i=1;i<dist.size();i++){
            if(last==dist[i]& i>=dist[i])
                break;
            last=dist[i];
            monsters++;
        }
        return monsters;
        
    }
};

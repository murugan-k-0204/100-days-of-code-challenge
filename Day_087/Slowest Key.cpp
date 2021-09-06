class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char shortest = keysPressed[0];
        int last_dif = 0,minn = 0;
        for(int i=0; i<keysPressed.size() ; i++){
            if(releaseTimes[i]-last_dif > minn){
                minn = releaseTimes[i]-last_dif;
                shortest = keysPressed[i];
            }
            else if(releaseTimes[i]-last_dif == minn){
                shortest = max(shortest, keysPressed[i]);
                // if(shortest > keysPressed[i])
                //     shortest = keysPressed[i];
            }
            last_dif = releaseTimes[i];
        }
        return shortest;
    }
};

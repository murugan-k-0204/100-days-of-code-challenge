class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) 
            return 0;
        if((int)log2(n) == log2(n)) 
            return 1;
        return 0;
    }
};

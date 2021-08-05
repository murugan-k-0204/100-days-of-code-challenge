class Solution {
public:
    bool checkPowersOfThree(int n) {          
        for (int i = 15; i >= 0; i--)
        {
            if(pow(3,i) == n)
                return  1;
            else if(pow(3,i) < n )
                n = n-pow(3,i);
        }
        if(n==0) return 1;
        return 0;
    }
};

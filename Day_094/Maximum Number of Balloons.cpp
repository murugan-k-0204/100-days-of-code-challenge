class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> characters;
        for (char c : text)
            if(c=='b' || c=='a' || c=='l' || c=='o' || c=='n')
                characters[c]++;
        int single_count =min(characters['b'],min(characters['a'],characters['n']));
        int double_count  = min(characters['l']/2,characters['o']/2);
        int result = min(single_count,double_count);

        return result;
        
    }
};

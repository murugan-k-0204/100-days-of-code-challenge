class Solution {
public:
bool isPalindrome(string s)
{
    string s_new = "";
    for (char i : s)
    {
        if (isalnum(i))
        {
            if(isalpha(i))
                s_new += tolower(i);
            else
                s_new+=i;
        }
    }

    for (int i = 0; i < s_new.size() / 2; i++)
    {
        if (s_new[i] != s_new[s_new.size() - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
};

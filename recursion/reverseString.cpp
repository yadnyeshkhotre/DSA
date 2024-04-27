//question link:https://leetcode.com/problems/reverse-string/
void helper(vector<char> &s, int i)
{
    int n = s.size();
    if (i >= (n / 2))
    {
        return;
    }
    swap(s[i], s[n - i - 1]);
    helper(s, i + 1);
}

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        helper(s, 0);
    }
};

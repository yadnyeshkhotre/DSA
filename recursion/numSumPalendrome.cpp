// question link:https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1

int helper(int l, int r,string str){
    if(l>=r) return 1;
    
    if(str[l]!=str[r])return 0;
    
    return helper(l+1,r-1,str);
}

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        int sum=0;
        for(int i=n;i>0;i/=10){
            sum+=i%10;
        }
        string str=to_string(sum);
        return helper(0,str.length()-1,str);
    }
};

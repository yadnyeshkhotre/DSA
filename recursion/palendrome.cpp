//question link:https://www.geeksforgeeks.org/problems/palindrome-string0817/1

int helper(char S[], int l,int r){
    
    if(l>=r) return 1;
    if(S[l]!=S[r])return 0;
    helper(S, l+1, r-1);
}


int isPalindrome(char  S[])
    {
        int sizee=strlen(S); 
        return helper(S, 0,sizee-1);
    }

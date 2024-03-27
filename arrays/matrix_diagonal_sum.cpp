class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(); // Number of rows
        int primary_dia = 0;
       
        for (int i = 0; i < n; i++) {
            primary_dia += mat[i][i];
            if(i!=n-i-1){
                primary_dia+=mat[i][n-i-1];
            }
        }
        return primary_dia ;
    }
};

//question link:https://leetcode.com/problems/matrix-diagonal-sum/

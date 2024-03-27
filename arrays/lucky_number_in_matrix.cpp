class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> arr;
        for(int i=0;i<matrix.size();i++){
            int min_index=0,min=INT_MAX;
            for(int j=0;j<matrix[i].size();j++){
                if(min>matrix[i][j]){
                    min=matrix[i][j];
                    min_index=j;
                }
            }
            bool is_true=true;
            for(int j=0;j<matrix.size();j++){
                if(matrix[i][min_index]<matrix[j][min_index]){
                    is_true=false;
                    break;
                }            
            }
            if(is_true){
                arr.push_back(matrix[i][min_index]);
            }
        }return arr;
    }
};

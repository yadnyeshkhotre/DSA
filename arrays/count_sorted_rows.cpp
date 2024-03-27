//question link:https://www.geeksforgeeks.org/problems/count-sorted-rows2702/1
class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        // code here
        int total_count=0;
        for(int i=0;i<N;i++){
            bool is_asc=true;
            bool is_dsc=true;
            
            for(int j=0;j<M-1;j++){
                if(Mat[i][j]>=Mat[i][j+1]){
                    is_dsc=false;
                }
                if(Mat[i][j]<=Mat[i][j+1]){
                    is_asc=false;
                }
            }
                
            if(is_asc || is_dsc){
                total_count++;
            }
          
        }
        return total_count;
    }
};

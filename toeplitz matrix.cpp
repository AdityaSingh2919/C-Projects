class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
      int x=matrix.size();  
      int y=matrix[0].size();  
      for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){

            if(i>0 && i<x && j>0 && j<y){
                if(matrix[i][j]!=matrix[i-1][j-1]){
                    return false;
                }
            }
        }
      }
      return true;
    }
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> arr;
        int strow=0,endrow=matrix.size()-1;
        int stcol=0,endcol=matrix[0].size()-1;


        while(strow <= endrow && stcol <= endcol){
            for(int i=stcol;i<=endcol;i++){
                arr.push_back(matrix[strow][i]);
            }
            for(int i=strow+1 ;i<=endrow;i++){
                arr.push_back(matrix[i][endcol]);
            }
            for(int i=endcol-1;i>=stcol;i--){
                if(strow==endrow){
                    break;
                }
                arr.push_back(matrix[endrow][i]);
            }
            for(int i=endrow-1;i>=strow+1;i--){
                if(stcol==endcol){
                    break;
                }
                arr.push_back(matrix[i][stcol]);
            }
            strow++;
            endrow--;
            stcol++;
            endcol--;
        }
        return arr;
    }
};

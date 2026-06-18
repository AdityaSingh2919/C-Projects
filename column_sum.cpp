/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>
using namespace std;
int search(int rows,int col,int matrix[][3]){
    int maxSum=INT_MIN;
    for(int i=0;i<col;i++){
        int colsum=0;
        for(int j=0;j<rows;j++){
   
            colsum+=matrix[j][i];
            
        }
        maxSum=max(maxSum,colsum);
    }
    return maxSum;
}
int main()
{
    
    int matrix[3][3]={{1,2,30}, {4,5,6}, {7,8,9}};
    cout<<search(3,3,matrix);
    

    return 0;
}

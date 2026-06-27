class Solution {
    // Function to interchange the rows of a matrix.
    static void interchangeRows(int matrix[][]) {
        // code here
        for(int i=0;i<matrix.length/2;i++){
            for(int j=0;j<matrix[0].length;j++){
                int temp=matrix[i][j];
               matrix[i][j]= matrix[matrix.length-1-i][j];
                matrix[matrix.length-1-i][j]=temp;
            }
        }
    }
}

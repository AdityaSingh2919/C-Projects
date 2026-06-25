class Solution {
    public List<Integer> exitPoint(int[][] mat) {
        // code here
        ArrayList<Integer>index=new ArrayList<>();
        int dir=0;
        int i=0;
        int j=0;
        int ansi=-1;
        
        int ansj=-1;
       while(i>=0 && i<mat.length && j>=0&& j<mat[0].length){
                if(mat[i][j]==1){
                    mat[i][j]=0;
                    
                    dir=(dir+1) % 4;
                    
                    
                }
                ansi=i;
                ansj=j;
              
                
                 if(dir==0)
                j++;
            else if(dir==1)
                i++;
            else if(dir==2)
                j--;
            else if(dir==3)
                i--;
            }
            index.add(ansi);
            index.add(ansj);
        
           
        return index;
    }
}

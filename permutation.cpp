// User function Template for Java

class Solution {
    static long factorial(long n){
        
         if(n==0 || n==1)
            return 1;
        long fact=1;
        for(long i=1;i<=n;i++){
            fact=fact*i;
        }return fact;
    }
    static long nPr(long n, long r) {
        if(n<r)
            return 0;
        // code here
        return factorial(n)/factorial(n-r);
    }
}

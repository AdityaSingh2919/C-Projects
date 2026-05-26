class Solution {
    int convertfive(int num) {
        // Your code here
        int res=0;
        if(num==0)
            return 5;
        while(num>=0){
            int rem=num%10;
            if(rem==0){
                rem=5;
                res=(res*10)+rem;
            }else{
                res=(res*10)+rem;
            }
            num=num/10;
        }
        int reverse=0;
        while(res>0){
            int rem1=res %10;
            reverse=(reverse*10)+rem1;
            res/=10;
        }
        return reverse;
    }
}

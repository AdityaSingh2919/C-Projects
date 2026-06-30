class Solution {
    public boolean hasTripletSum(int arr[], int target) {
        // code Here
        Arrays.sort(arr);
    for(int i=0;i<arr.length;i++){
        
        int st=i+1;
        int end=arr.length-1;
        while(st<end){
            if(arr[i] + arr[st] +arr[end] >target){
              
               end--;
               
            }else if(arr[i] + arr[st] + arr[end]<target){
                st++;
                
            }else{
                return true;
            }
        }
    }
    return false;
    }
}


class Solution {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);
        int count=1;
        
            for(int j=0;j<nums.length-1;j++){
                if(nums[j]==nums[j+1])
                    count++;
            }
        if(count>=2)
            return true;
        return false;
    }
}

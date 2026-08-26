class Solution {
    public int secondLargestElement(int[] nums) {
        int largest=nums[0];
        int s_largest=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>largest){
                s_largest=largest;
                largest=nums[i];
            }
            else if(nums[i]<largest && nums[i]>s_largest){
                s_largest=nums[i];
            }
        }
        return s_largest;
    
    }
}
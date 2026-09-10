class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // two pointer approach
        // find the first zero
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
            
        }
        if(j==-1) return;
        

        // if we find non-zero element
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }

// brute force
//         int n=nums.size();
//         int index=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0){
//                 nums[index]=nums[i];
//                 index++;
//             }
//         }
//         for(int i=index;i<n;i++){
//             nums[i]=0;
//         }
    }
};
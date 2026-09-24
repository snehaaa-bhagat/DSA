class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        // time complexity:O(NlogM)
        // for(int i=0;i<n;i++){
        //     int num=nums[i];
        //     int digits=0;
            
        //     while(num>0){
        //         num=num/10;
        //         digits++;
        //     }
        //     if(digits%2==0){
        //         count++;
        //     }
        // }
        
        // return count;

        // optimal, since we have given constraint
        for(int i=0;i<n;i++){
            int num=nums[i];
            if ((num>=10 && num<=99) || (num>=1000 && num<=9999) || num==100000){
                count++;
            }
        }
        return count;
        
    }
};
        
        
//     }
// };
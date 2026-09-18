class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();

        // optimal approach(using xor operator)
        int Xor=0;
        for(int i=0;i<n;i++){
            Xor=Xor^nums[i];
        }
        return Xor;
    }
};
       
        // using map(better approach)
//         unordered_map<int,int> freq;
//         for(int i=0;i<n;i++){
//             freq[nums[i]]++;
//         }
//         for(int i=0;i<n;i++){
//             if(freq[nums[i]]==1){
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };
    // brute force(linear search)
    //     for(int i=0;i<n;i++){
    //         int num=nums[i];
    //         int cnt=0;

        
    //     for(int j=0;j<n;j++){
    //         if(nums[j]==num){
    //             cnt++;
    //         }
    //     }
    //     if(cnt==1){
    //         return num;
    //     }
    //     }
    //     return -1;
        
    // }
// };
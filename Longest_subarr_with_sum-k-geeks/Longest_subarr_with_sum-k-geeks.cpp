class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        // int left=0,right=0;
        int sum=0;
        int length=0;
        int max_length=0;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(sum==k){
                max_length=i+1;
            }
            if(mp.find(sum-k)!=mp.end())
            
            {
                length=i-mp[sum-k];
                max_length=max(max_length,length);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return max_length;
    }
};
        
//         for(right=0;right<arr.size();right++){
//             sum=sum+arr[right];
//             while(sum>k){
//                 sum=sum-arr[left];
//                 left++;
//             }
//             if(sum==k){
//                 max_length=max(max_length,right-left+1);
//             }
            
            
//         }
//         return max_length;
    
        
//     }
// };

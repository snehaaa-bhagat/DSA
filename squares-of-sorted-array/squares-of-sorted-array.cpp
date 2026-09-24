class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int> result;
        //  int n=nums.size();
        //  for(int i=0;i<n;i++){
        //     int num=nums[i];
        //     int square=num*num;
        //     result.push_back(square);
        //  }
        //  sort(result.begin(),result.end());
        //  return result;

        // two pointer app(optimal)
        int n=nums.size();
        vector<int> result(n);
        int left=0,right=n-1;
        int pos=n-1;
        while(left<=right){
            int leftsq=nums[left]*nums[left];
            int rightsq=nums[right]*nums[right];

            if(leftsq>rightsq){
                result[pos]=leftsq;
                left++;
            }
            else{
                result[pos]=rightsq;
                right--;
            }
            pos--;
        
        }
    return result;    
    }
};
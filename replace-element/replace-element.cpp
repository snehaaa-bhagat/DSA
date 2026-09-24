class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int right_max=-1;
        for(int i=n-1;i>=0;i--){
            int temp=arr[i];
            arr[i]=right_max;
            right_max=max(right_max,temp);
        }
        return arr;

        // vector<int> result(n);
        // for(int i=0;i<arr.size();i++){
        //     int max_right=-1;
        //     for(int j=i+1;j<arr.size();j++){
        //         max_right=max(max_right,arr[j]);
        //         }
            
        //     result[i]=max_right;
        // }
        // return result;
        
    }
};
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> freq;
        for(int i=0;i<arr1.size();i++){
            freq[arr1[i]]++;
        }
        vector<int> result;
        for(int i=0;i<arr2.size();i++){
            int val=arr2[i];
            while(freq[val]>0){
                result.push_back(val);
                freq[val]--;
            }
        }
        vector<int> leftover;
        for(auto &entry: freq){
            int value=entry.first;
            int count=entry.second;
            for(int k=0;k<count;k++){
                leftover.push_back(value);
            }
        }
        sort(leftover.begin(), leftover.end());
        for(int val:leftover){
            result.push_back(val);
        }
    return result;
    }
};
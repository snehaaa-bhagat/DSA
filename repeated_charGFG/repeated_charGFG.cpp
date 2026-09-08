class Solution {
  public:
    char firstRep(string s) {
        // for(int i=0;i<s.size();i++){
        //     for(int j=i+1;j<s.size();j++){
        //         if(s[i]==s[j]){
        //             return s[i];
        //         }
        //     }
        // }
        
        // return '#';
        
        // code here.
        // By ASCII approach
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:s){
            if(freq[c-'a']>1){
                return c;
            }
        }
        return '#';
    }
};
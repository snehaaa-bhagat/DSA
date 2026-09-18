class Solution {
  public:
    int transform(string &s1, string &s2) {
        // code here
        int n=s1.size();
        int m=s2.size();
        if(n!=m){
            return -1;
        }
        int freq[26]={0};
        
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
            freq[s2[i]-'a']--;
        }
        for(int c : freq){
            if(c!=0){
                return -1;
            }
    
        }
   
    
    int i=n-1;
    int j=m-1;
    int count=0;
    while(i>=0 && j>=0){
        if(s1[i]==s2[j]){
            i--;
            j--;
        }
        else{
            count++;
            i--;
        }
        
    }
    return count;    
          
    }
};
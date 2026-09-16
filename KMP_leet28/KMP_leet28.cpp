class Solution {
public:
    int strStr(string haystack, string needle) {
                int n=haystack.size();
                int m=needle.size();
        vector<int> lps(m,0);
        vector<int> result;
        
        int i=1;
        int j=0;
        // int k=0;
        while(i<m){
            if(needle[i]==needle[j]){
                j++;
                lps[i]=j;
                i++;
            }
            else{
                if(j==0){
                    lps[i]=0;
                    i++;
                }
                else{
                    j=lps[j-1];
                }
            }
        }
        i=0;
        int k=0;
        while(i<n){
            if(haystack[i]==needle[k]){
                i++;
                k++;
        
            }
            else{

            
                if(k!=0){
                    k=lps[k-1];
                }
                else if(k==0){
                    i++;
                }
                
            }
            if(k==m){
                return i-m;
            }

        }
    return -1;
    
        
    }
};
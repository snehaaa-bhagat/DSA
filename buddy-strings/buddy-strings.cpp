class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;

        if(s==goal){
            int freq[26]={0};
            for(char c:s){
                if(freq[c-'a']>0) return true;

                freq[c-'a']++;
            }
            return false;
        }
        
        vector<int> diffs;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                diffs.push_back(i);
            }
        }
        if(diffs.size()!=2) return false;
        int i=diffs[0];
        int j=diffs[1];
        return (s[i]==goal[j] && s[j]==goal[i]);
   
    }
};
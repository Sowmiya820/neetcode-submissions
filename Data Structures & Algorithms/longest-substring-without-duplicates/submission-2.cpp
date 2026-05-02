class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int res=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){  
               j = max(j, mp[s[i]] + 1);
            }
            
            mp[s[i]]=i;
            res=max(i-j+1,res);
         
            
    
        }
        return res;
    }
};

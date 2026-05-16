class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0,h=n-1;
        while(l<h){
          while(l<h && !isalnum(s[l])){
            l++;
          }
          while(l<h && !isalnum(s[h])){
            h--;
          }
          if(tolower(s[l])!=tolower(s[h])){
            return false;
          }
          l++;
          h--;
        }
        return true;
    }
};

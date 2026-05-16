class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0,h=n-1;
        while(l<=h){
            char f=tolower(s[l]);
            char sec=tolower(s[h]);   

            if(isalnum(f) && isalnum(sec)){
                if(f!=sec){
                    return false;
                }
                else{
                    l++;
                    h--;
                }
            }
            else if(!isalnum(f) || !isalnum(sec)){
                if(!isalnum(f) && !isalnum(sec)){
                    l++;
                    h--;
                }
                else if(!isalnum(f)){
                    l++;
                }
                else{
                    h--;
                }
            }
        }
        return true;
    }
};

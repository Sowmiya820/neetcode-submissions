class Solution {
public:
    
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        res[0]=0;
        if(n==0) return res;
        res[1]=1;
         if(n==1) return res;
        for(int i=2;i<=n;i++){
            res[i]=__builtin_popcount(i);
        }
        return res;
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='{' || c=='[' || c=='('){
               st.push(c);
            }
            else if(st.size()!=0){
                if(c=='}' && st.top()!='{') 
                {
                    return false;
                }
                if(c==']' && st.top()!='[')
                {
                    return false;
                } 
                if(c==')' && st.top()!='('){
                return false;
            }
            else{
                st.pop();
            }
            }
            else{
                return false;
            }
            
        }
        return st.size()==0;
    }
};

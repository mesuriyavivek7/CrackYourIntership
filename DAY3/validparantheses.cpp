class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp;
        mp['(']=')';
        mp['{']='}';
        mp['[']=']';

        for(int i=0;i<s.size();i++){
            if(st.size()==0){
                st.push(s[i]);
            }else{
                char top=st.top();
                if(mp[top]==s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }

        if(st.size()==0){
            return true;
        }else{
            return false;
        }
    }
};
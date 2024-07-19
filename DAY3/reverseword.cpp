class Solution {
public:
    string reverseWords(string s) {
        vector<string> splt;
        string ans="";
        for(int i=0;i<s.length();i++){
           if(s[i]!=' '){
             ans+=s[i];
           }else{
             if(ans!=""){
               splt.push_back(ans);
             }
             ans="";
           }
        }
        if(ans!=""){
            splt.push_back(ans);
            ans="";
        }

        for(int i=splt.size()-1;i>=0;i--){
            
            ans+=splt[i];
            if(i!=0){
              ans+=" ";
            }
        
        }
        return ans;

    }
};
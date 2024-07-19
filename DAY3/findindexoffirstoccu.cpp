class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int firstOcc=-1;
        while(i<haystack.size()){
              if(haystack[i]==needle[j]){
                   if(j==0){
                      firstOcc=i;
                   }
                   if(j==needle.size()-1){
                     return firstOcc;
                   }
                   j++;
              }else{
                j=0;
              }
              i++;
        }
        return -1;
    }
};
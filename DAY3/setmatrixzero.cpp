class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> c,r;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
               if(matrix[i][j]==0){
                  c[j]=1;
                  r[i]=1;
               }
            }
        }

        for(int i=0;i<matrix.size();i++){

            for(int j=0;j<matrix[i].size();j++){

                if(r[i]==1 || c[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};

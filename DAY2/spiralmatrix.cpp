class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int left=0;
        int top=0;
        int right=matrix[0].size()-1;
        int bottom=matrix.size()-1;
        int k=0;



        //my dry run
        //left: 0 1
        //right:3 2 1
        //top: 0 1 2
        //bottom: 2 1
 
        while(left<=right && top<=bottom){
        //left to right
        k=left;
        while(k<=right){
            ans.push_back(matrix[top][k]);
            k++;
        }
          //increase top
          top++;


        //top to bottom
        k=top;
        while(k<=bottom){
            ans.push_back(matrix[k][right]);
            k++;
        }
          //decrease right
          right--;

         
        //right to left
        k=right;
        while(k>=left && top<=bottom){
           ans.push_back(matrix[bottom][k]);
           k--;
        }
          //decrease bottom
          bottom--;
        
        //bottom to top
        k=bottom;
        while(k>=top && left<=right){
            ans.push_back(matrix[k][left]);
            k--;
        }

        //increase left
        left++;
        }
        return ans;
    }
};
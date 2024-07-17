class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> map(nums.size(),0);

        for(int i=0;i<nums.size();i++){
            if(map[nums[i]-1]==1){
                return nums[i];
            }else{
                 map[nums[i]-1]=1;
            }
             
        }
        return -1;
    }
};
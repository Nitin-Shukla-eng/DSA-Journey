
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0;
        bool nonzero=false;

        for(int num:nums){
            xr^=num;
            if(num!=0){
                nonzero=true;
            }
        }
        if(xr!=0){
            return nums.size();
        }
        if(!nonzero){
            return 0;
        }

        return nums.size()-1;
    }
};
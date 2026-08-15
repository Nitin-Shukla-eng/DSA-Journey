// class Solution {
// public:
//     int longestSubsequence(vector<int>& nums) {
//         int i=0,j=1,ans=0;
//         while(j<nums.size()){
//             if((nums[i]^nums[j]) !=0){
//                 j++;
//             }
//             else{
//                 i++;
//                 j=i+1;
//             }
//         }
//         ans=j-i+1;
//         return ans;
//     }
// };

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool hasNonZero = false;

        for (int num : nums) {
            xr ^= num;

            if (num != 0) {
                hasNonZero = true;
            }
        }

        if (xr != 0) {
            return nums.size();
        }

        if (!hasNonZero) {
            return 0;
        }

        return nums.size() - 1;
    }
};
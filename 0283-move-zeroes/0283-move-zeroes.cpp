// should have red the question first
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> num;
//         int i=0;
//         for(int x:nums){
//             if(x!=0){
//                 num.push_back(x);
//             }
//             else i++;
//         }
//         while(i>0){
//             num.push_back(0);
//             i--;
//         }
//         return num;
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
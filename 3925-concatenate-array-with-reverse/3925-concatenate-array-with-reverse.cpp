class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> num;
        for(int i=0;i<nums.size();i++){
            num.push_back(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            num.push_back(nums[i]);
        }
        return num;
    }
};
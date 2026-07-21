// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==nums[i+1]){
//                 return true;
//             }
//         }
//         return false;
//     }
// };


//2

// class Solution {
// public:
//     bool containsDuplicate(vector<int> &nums){
//         unordered_set<int> love;
//         for(int n:nums){
//             if(love.count(n)) return true;
//             else love.insert(n);
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool containsDuplicate(vector<int> &nums){
        unordered_map<int,int> mp;
        for(int n:nums){
            mp[n]++;
            if(mp[n]>1) return true;
        }
        return false;
    }
};
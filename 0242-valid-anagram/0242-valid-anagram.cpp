// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()){
//             return false;
//         }
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         if(s==t) return true;
//         return false;
//     }
// };

//2

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26, 0);

        for(char c : s){
            freq[c-'a']++;
        }
        for(char c : t){
            freq[c-'a']--;
        }

        for(int x : freq){
            if(x != 0){
                return false;
            }
        }
        return true;
    }
};
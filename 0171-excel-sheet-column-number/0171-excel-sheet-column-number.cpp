class Solution {
public:
    int titleToNumber(string ct) {
        long long ans=0;
        for(char ch:ct){
            ans=ans*26+(ch-'A'+1);
        }
        return (int)ans;
    }
};
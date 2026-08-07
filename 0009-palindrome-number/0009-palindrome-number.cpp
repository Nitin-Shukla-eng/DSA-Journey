class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long og=x;
        long rev=0;
        while(x>0){
            int d=x%10;
            rev=rev*10 + d;
            x/=10;
        }
        return og==rev;
    }
};
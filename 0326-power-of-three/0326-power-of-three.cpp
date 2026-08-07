// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         if(n<=0) return false;
//         long long x=1;
//         while(x<n){
//             x*=3;
//         }
//         if(x==n) return true;
//         else{
//              return false;
//         }
//     }
// };

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        while(n>0){
            if(n%3!=0 and n!=1) return false;
            n/=3;
        }
        return true;
    }
};
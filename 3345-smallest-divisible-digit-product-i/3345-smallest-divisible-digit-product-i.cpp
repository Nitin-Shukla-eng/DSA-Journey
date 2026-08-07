class Solution {
public:
    int fun(int n){
        if(n<10) return n;
        return (n%10)*(fun(n/10));
    }
    int smallestNumber(int n, int t) {
        if(fun(n)%t==0) return n;
        return (smallestNumber(n+1,t));
    }
};
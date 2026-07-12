class Solution {
private:
    int fun(string &s, int i, long res, int sign){
        if(i>=s.size()||!isdigit(s[i])){
            return sign*res;
        }
        res=res*10+(s[i]-'0');
        if(sign*res>=INT_MAX) return INT_MAX;
        if(sign*res<=INT_MIN) return INT_MIN;
        return fun(s,i+1,res,sign);
    }
public:
    int myAtoi(string s) {
        int i=0, sign=1;
        while(i<s.size() && s[i]==' ') i++;
        if(s[i]=='+' || s[i]== '-'){
            if(s[i]=='-') sign=-1*sign;
            i++;
        }
        while(i<s.size() && s[i]=='0') i++;
        return fun(s,i,0L,sign);
        
    }
};
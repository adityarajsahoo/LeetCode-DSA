class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0 || n<0)
            return false;
        if(n==1)
            return true;
        
        double m = log2(n)/log2(4);
        if(n == pow(4,int(m)))
            return true;
        else
            return false;
    }
};
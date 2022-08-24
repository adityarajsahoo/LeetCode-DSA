class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 || n<0)
            return false;
        if(n==1)
            return true;
        
        double x = log2(n)/log2(3);
        
        if(n==pow(3,int(x)))
            return true;
        else
            return false;
    }
};
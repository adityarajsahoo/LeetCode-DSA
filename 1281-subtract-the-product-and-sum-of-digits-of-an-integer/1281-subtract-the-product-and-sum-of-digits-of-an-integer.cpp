class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        int num = n;
        while(num!=0){
            int last = num%10;
            sum += last;
            prod *= last;
            num /= 10;
        }
        return prod - sum;
    }
};
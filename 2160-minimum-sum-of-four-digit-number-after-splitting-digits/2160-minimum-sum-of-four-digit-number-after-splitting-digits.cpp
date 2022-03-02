class Solution {
public:
    int minimumSum(int num) {
        int index = 0;
        vector<int> Digit(4);
        while(num>0)
        {
            Digit[index++] = num%10;
            num/=10;
        }
        sort(Digit.begin(),Digit.end());
        return Digit[2] + Digit[3] + Digit[0]*10 + Digit[1]*10;
    }
};
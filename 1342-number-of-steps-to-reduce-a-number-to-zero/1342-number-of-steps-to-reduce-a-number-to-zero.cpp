class Solution {
public:
    int numberOfSteps(int num) {
        int res=0;
        while(num)
        {
            
            if(num & 1)
            {
                num = num - 1;
            }
            else
            {
                num = num/2;
            }
            res++;
        }
        return res;
    }
};
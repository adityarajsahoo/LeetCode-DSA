class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num = 0;
        for(int i=0; i<jewels.length();i++)
        {
            num += count(stones.begin(),stones.end(),jewels[i]);
        }
        return num;
    }
};
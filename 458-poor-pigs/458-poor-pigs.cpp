class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        // Total Rounds (T) = totalTime/poisonTime
        // Assume p = no of pigs that will give us the result
        // Therefore, (T+1)^p >= buckets
        // Taking log on both sides, p = log(buckets)/log(T+1);
        // Return ceil of p 
        
        return ceil(log(buckets) / log(minutesToTest / minutesToDie + 1));
    }
};
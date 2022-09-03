// https://www.youtube.com/watch?v=OXyysa9Qf2s
class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        queue<int> q;
        
        for(int i=1;i<=9;i++){
            q.push(i);
        }
        
        int level=1;
        
        while(!q.empty()){
            int qs=q.size();
            level++;
            while(qs--){
                int p=q.front();
                q.pop();
                int r=p%10;
                if(r+k<=9){
                    q.push(p*10+r+k);
                }
                if(r-k>=0 && k>0){
                    q.push(p*10+r-k);
                }
            }
            if(level==n){
                break;
            }
        }
        
        vector<int> ans;
        
        while(!q.empty()){
            int p=q.front();
            q.pop();
            ans.push_back(p);
        }
        
        return ans;
    }
};
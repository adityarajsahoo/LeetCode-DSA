class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        for(int i=0; i<m; i++){
            vector<int> x=image[i];
            reverse(x.begin(),x.end());
            image[i]=x;
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++)
                image[i][j]^=1;
        }
        
        return image;
    }
};
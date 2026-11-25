class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>row1(m,0);
        vector<int>col1(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    row1[i]+=1;
                    col1[j]+=1;
                }
            }
        }
     vector<vector<int>>diff(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int onesRowi=row1[i];
                int onesColj=col1[j];
                int zerosRowi=n-onesRowi;
                int zerosColj=m-onesColj;
                diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj;
            }
            }

     return diff;
        
    }
};
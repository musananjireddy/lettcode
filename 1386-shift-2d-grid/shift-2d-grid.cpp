class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n  = grid.size();
        int m = grid[0].size();
        if(n==1 && m==1){
            return grid;
        }
        vector<vector<int>>mat(n,vector<int>(m));
        for(int p=0;p<k;p++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i!=n-1 && j==m-1){
                        mat[i+1][0]=grid[i][j];
                    }
                    else if(i==n-1 && j ==m-1){
                        mat[0][0]=grid[i][j];
                    }
                    else{
                        mat[i][j+1]=grid[i][j];
                    }
                }
            }
            grid = mat;
        }
        return mat;

        
    }
};
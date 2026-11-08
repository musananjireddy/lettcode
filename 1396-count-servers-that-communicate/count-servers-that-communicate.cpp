class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);
        for(int i=0;i<m;i++){
            int cnt1=0;
            for(int k=0;k<n;k++){
                if(grid[i][k]==1){
                    cnt1++;
                }
            }
            row[i]=cnt1;
        }
        for(int i=0;i<n;i++){
            int cnt2=0;
            for(int l=0;l<m;l++){
                if(grid[l][i]==1){
                    cnt2++;
                }

            }
            col[i]=cnt2;
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && (row[i]>1 || col[j]>1)){
                    ans++;
                }
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0;
        int j = m*n-1;
        while(i<=j){
            int mid = i+(j-i)/2;
            int ans = matrix[mid/n][mid%n];
            if(ans==target){
                return true;
            }
            else if(target<ans){
                j = mid-1;
            }
            else{
                i= mid+1;
            }
        }
        return false;
        
    }
};
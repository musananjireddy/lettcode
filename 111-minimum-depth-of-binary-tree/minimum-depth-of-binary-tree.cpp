/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void slove(TreeNode*root,int &min_val,int cnt,int &cnt1){
        if(root==NULL){
            return;
        }
        cnt++;
        cnt1++;
        if(root->left==NULL && root->right==NULL){
            min_val = min(min_val,cnt);
            return;
        }
        slove(root->left,min_val,cnt,cnt1);
        slove(root->right,min_val,cnt,cnt1);
    }
    int minDepth(TreeNode* root) {
        int min_val=INT_MAX;
        int cnt1=0;
        int cnt=0;
        slove(root,min_val,cnt,cnt1);
        if(min_val==INT_MAX){
            return cnt1;
        }
        return min_val;
        
    }
};
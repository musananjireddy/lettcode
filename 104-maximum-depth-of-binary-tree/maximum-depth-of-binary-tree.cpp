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
    void search(TreeNode*root ,int cnt,int &max_val){
        if(root==NULL){
            return;
        }
        cnt++;
        if(root->left==NULL && root->right==NULL){
            max_val= max(max_val,cnt);
            return;
        }
       
        search(root->left,cnt,max_val);
        search(root->right,cnt,max_val);
    }
    int maxDepth(TreeNode* root) {
        int cnt=0;
        int max_val = 0;
        search(root,cnt,max_val);
        return max_val;
        
    }
};
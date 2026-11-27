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
    int goodNodes(TreeNode* root) {
        int cnt=0;
       
        stack<pair<TreeNode*,int>>st;
        st.push({root,root->val});
        while(!st.empty()){
           
                TreeNode*curr = st.top().first;
                int max_val = st.top().second;
                st.pop();
                if(curr->val>=max_val){
                    cnt++;
                }
                int new_max_val = max(max_val,curr->val);
                if(curr->right!=NULL){
                    st.push({curr->right,new_max_val});
                }
                if(curr->left!=NULL){
                    st.push({curr->left,new_max_val});
                }
            
            
        }
        return cnt;
    }


};
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        std::queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            TreeNode* added = q.front();
            result.push_back(added->val);
            int init = q.size();
            for(int i=0; i<init; i++){
                TreeNode* popped = q.front();
                q.pop();
                if(popped->right) q.push(popped->right);
                if(popped->left) q.push(popped->left);
            }
        }
        return result;
    }
};



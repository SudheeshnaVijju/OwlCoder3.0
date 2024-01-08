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
    int fun(TreeNode* root, int l, int h){
        if(root==NULL) return 0;
        //cout<<s<<" ";
        int s=0;
        if(root->val>=l && root->val<=h) s+=root->val;

        s+=fun(root->left,l,h);
        s+=fun(root->right,l,h);
        
        cout<<root->val<<" ";

        return s;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return fun(root,low,high);
    }
};

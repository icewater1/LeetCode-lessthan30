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
    bool sym(TreeNode* L,TreeNode* R)
    {
        if(!(L||R))return true;
        else
        {
            if(L && R && L->val == R->val)
            {
                return sym(L->left,R->right)&&sym(L->right,R->left);
            }
            else
            {
                return false;
            }
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr || (!root->left && !root->right))return true;
        if(root->left && root->right)
        {
            return sym(root->left,root->right);
        }
        else
        {
            return false;
        }
    }
};

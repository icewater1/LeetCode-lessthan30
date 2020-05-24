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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool pN = p==nullptr, qN = q==nullptr;
        if(pN&&qN)return true;
        else if(pN^qN)return false;
        else
        {
            bool res = (p->val == q->val); 
            return (res && isSameTree(p->left, q->left) && isSameTree(p->right,q->right));

        }
    }
};

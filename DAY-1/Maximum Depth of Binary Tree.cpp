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
    int maxDepth(TreeNode* root) {
        int maxLen=INT_MIN;
        int current=0;
        if(root==NULL)
            return 0;
        calculateHeight(root,maxLen,current);
        return maxLen;
    }
    void calculateHeight(TreeNode* node,int &maxLen,int current)
    {
        if(node==NULL)
        {
            if(current>maxLen)
                maxLen=current;
            return;
        }
             calculateHeight(node->left,maxLen,current+1);
             calculateHeight(node->right,maxLen,current+1); 
    }
};


 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int> ll;
        vector<vector<int> > ls;
        if(root == NULL)
        {
            ls.clear();
            return ls;
        }
        queue<TreeNode*> alpha;
        queue<TreeNode*> beta;
        int val = 0;
        alpha.push(root);
        while(!alpha.empty() || !beta.empty())
        {
            ll.clear();
            while(!alpha.empty())
            {
                TreeNode* node = alpha.front();
                ll.push_back(node->val);
                if(node->left != NULL)
                {
                    beta.push(node->left);
                }
                if(node->right != NULL)
                {
                    beta.push(node->right);
                }
                alpha.pop();
            }
            if(!ll.empty())
            {
                ls.push_back(ll);
            }
            ll.clear();
            while(!beta.empty())
            {
                TreeNode* node = beta.front();
                ll.push_back(node->val);
                if(node->left != NULL)
                {
                    alpha.push(node->left);
                }
                if(node->right != NULL)
                {
                    alpha.push(node->right);
                }
                beta.pop();
            }
            if(!ll.empty())
            {
                ls.push_back(ll);
            }
        }
        return ls;
    }
};

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution
// {
// public:
//     TreeNode *solve(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         if (root == NULL)
//         {
//             return NULL;
//         }
//         if (root == p or root == q)
//         {
//             return root;
//         }
//         TreeNode *left = solve(root->left, p, q);
//         TreeNode *right = solve(root->right, p, q);
//         if (left == NULL and right == NULL)
//         {
//             return NULL;
//         }
//         if (left != NULL and right == NULL)
//         {
//             return left;
//         }
//         if (left == NULL and right != NULL)
//         {
//             return right;
//         }
//         if (left != NULL and right != NULL)
//         {
//             return root;
//         }
//         else
//             return NULL;
//     }
//     TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         TreeNode *ans = solve(root, p, q);
//         return (ans);
//     }
// };
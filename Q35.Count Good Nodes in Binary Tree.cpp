// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };
//  */
// class Solution {
//     public:
//         void solve(TreeNode* root, int Maxi, int& cnt) {
//             if (root == NULL) {
//                 return;
//             }
//             if (Maxi <= root->val) {
//                 Maxi = max(Maxi, root->val);
//                 solve(root->left, Maxi, cnt += 1);
//             } else {
//                 solve(root->left, Maxi, cnt);
//             }
    
//             if (Maxi <= root->val) {
//                 Maxi = max(Maxi, root->val);
//                 solve(root->right, Maxi, cnt += 1);
//             } else {
//                 solve(root->right, Maxi, cnt);
//             }
//         }
//         int goodNodes(TreeNode* root) {
//             int cnt = 0;
//             solve(root, root->val, cnt);
//             return cnt/2 ;
//         }
//     };
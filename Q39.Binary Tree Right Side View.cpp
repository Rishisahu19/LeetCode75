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
// class Solution
// {
// public:
//     vector<int> rightSideView(TreeNode *root)
//     {
//         vector<vector<int>> ans;
//         if (root == NULL)
//         {
//             return {};
//         }
//         queue<TreeNode *> q;
//         q.push(root);
//         q.push(NULL);
//         vector<int> v;
//         while (!q.empty())
//         {
//             TreeNode *temp = q.front();
//             q.pop();
//             if (temp == NULL)
//             {

//                 if (!q.empty())
//                 {
//                     q.push(NULL);
//                 }
//                 ans.push_back(v);
//                 v.clear();
//             }
//             else
//             {
//                 v.push_back(temp->val);
//                 if (temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 if (temp->right)
//                 {
//                     q.push(temp->right);
//                 }
//             }
//         }
//         vector<int> V;
//         for (int i = 0; i < ans.size(); i++)
//         {
//             int n = ans[i].size();
//             V.push_back(ans[i][n - 1]);
//         }
//         return V;
//     }
// };
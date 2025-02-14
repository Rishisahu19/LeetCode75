// class Solution {
//     public:
//         void solve(TreeNode* root, int targetSum, long long sum, unordered_map<long long, int>& mp, int& cnt) {
//             if (root == NULL) {
//                 return;
//             }
            
//             sum += root->val;
//             if (mp.find(sum - targetSum) != mp.end()) {
//                 cnt += mp[sum - targetSum];
//             }
            
//             mp[sum]++;
//             solve(root->left, targetSum, sum, mp, cnt);
//             solve(root->right, targetSum, sum, mp, cnt);
//             mp[sum]--;
//         }
        
//         int pathSum(TreeNode* root, int targetSum) {
//             unordered_map<long long, int> mp;
//             mp[0] = 1;
//             int cnt = 0;
//             solve(root, targetSum, 0, mp, cnt);
//             return cnt;
//         }
//     };
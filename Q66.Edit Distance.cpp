// class Solution
// {
// public:
//     int solve(string &a, string &b, int i, int j)
//     {
//         if (i == a.size())
//         {
//             return b.size() - j; // Remaining Operation
//         }
//         if (j == b.size())
//         {
//             return a.size() - i; // Remaining Operation
//         }
//         int ans = 0;
//         if (a[i] == b[j])
//         {
//             ans = solve(a, b, i + 1, j + 1);
//         }
//         else
//         {
//             // Insert
//             int Insert = 1 + solve(a, b, i, j + 1);
//             // Delete
//             int Delete = 1 + solve(a, b, i + 1, j);
//             // Replace
//             int Replace = 1 + solve(a, b, i + 1, j + 1);
//             ans = min(Insert, min(Delete, Replace));
//         }
//         return ans;
//     }
//     int solve_Memo(string &a, string &b, int i, int j,
//                    vector<vector<int>> &dp)
//     {
//         if (i == a.size())
//         {
//             return b.size() - j; // Remaining Operation
//         }
//         if (j == b.size())
//         {
//             return a.size() - i; // Remaining Operation
//         }
//         if (dp[i][j] != -1)
//         {
//             return dp[i][j];
//         }
//         int ans = 0;
//         if (a[i] == b[j])
//         {
//             ans = solve_Memo(a, b, i + 1, j + 1, dp);
//         }
//         else
//         {
//             // Insert
//             int Insert = 1 + solve_Memo(a, b, i, j + 1, dp);
//             // Delete
//             int Delete = 1 + solve_Memo(a, b, i + 1, j, dp);
//             // Replace
//             int Replace = 1 + solve_Memo(a, b, i + 1, j + 1, dp);
//             ans = min(Insert, min(Delete, Replace));
//         }
//         dp[i][j] = ans;
//         return dp[i][j];
//     }
//     int minDistance(string word1, string word2)
//     {
//         int n1 = word1.size();
//         int n2 = word2.size();
//         // return solve(word1,word2,0,0);
//         vector<vector<int>> dp(n1, vector<int>(n2, -1));
//         return solve_Memo(word1, word2, 0, 0, dp);
//     }
// };
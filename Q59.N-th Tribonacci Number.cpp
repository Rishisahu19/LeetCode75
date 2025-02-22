// Approach: Recursion
// class Solution
// {
// public:
//     int solve(int n)
//     {
//         if (n == 0 or n == 1)
//         {
//             return n;
//         }
//         if (n == 2)
//         {
//             return 1;
//         }
//         return solve(n - 1) + solve(n - 2) + solve(n - 3);
//     }
//     int tribonacci(int n) { return solve(n); }
// };

// Approach: Recursion + Memoization
// class Solution
// {
// public:
//     int solve(int n, vector<int> &DP)
//     {
//         if (DP[n] != -1)
//         {
//             return DP[n];
//         }
//         if (n == 0 or n == 1)
//         {
//             return n;
//         }
//         if (n == 2)
//         {
//             return 1;
//         }
//         return DP[n] = solve(n - 1, DP) + solve(n - 2, DP) + solve(n - 3, DP);
//     }
//     int tribonacci(int n)
//     {
//         vector<int> DP(n + 1, -1);
//         return solve(n, DP);
//     }
// };
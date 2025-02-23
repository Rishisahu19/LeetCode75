// Approach: Recursion
// class Solution
// {
// public:
//     int M = 1000000007;

//     int solve(int n)
//     {
//         if (n == 1 || n == 2)
//             return n;
//         if (n == 3)
//             return 5;

//         return (2 * solve(n - 1) % M + solve(n - 3) % M) % M;
//     }

//     int numTilings(int n)
//     {
//         return solve(n);
//     }
// };

// Approach: Recursion + Memoization
// class Solution
// {
// public:
//     int M = 1000000007;
//     int solve(int n, vector<int> &DP)
//     {
//         if (n == 1 || n == 2)
//             return n;
//         if (n == 3)
//             return 5;

//         if (DP[n] != -1)
//             return DP[n];

//         return DP[n] = (2 * solve(n - 1, DP) % M + solve(n - 3, DP) % M) % M;
//     }

//     int numTilings(int n)
//     {
//         vector<int> DP(n + 1, -1);
//         return solve(n, DP);
//     }
// };

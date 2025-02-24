// class Solution
// {
// public:
//     int solve(vector<int> &prices, int i, int buy, int &fee)
//     {
//         if (i >= prices.size())
//         {
//             return 0;
//         }
//         int profit1 = 0;
//         int profit2 = 0;
//         if (buy)
//         {
//             int profit_Buy = -prices[i] + solve(prices, i + 1, 0, fee);
//             int profit_Buy_ignore = 0 + solve(prices, i + 1, 1, fee);
//             profit1 = max(profit_Buy, profit_Buy_ignore);
//         }
//         else
//         {
//             int profit_sell = prices[i] + solve(prices, i + 1, 1, fee) - fee;
//             int profit_sell_ignore = 0 + solve(prices, i + 1, 0, fee);
//             profit2 = max(profit_sell, profit_sell_ignore);
//         }
//         return max(profit1, profit2);
//     }
//     int solveMemo(vector<int> &prices, int i, bool buy, int fee,
//                   vector<vector<int>> &dp)
//     {
//         if (i >= prices.size())
//         {
//             return 0;
//         }
//         if (dp[i][buy] != -1)
//         {
//             return dp[i][buy];
//         }
//         int profit;
//         if (buy)
//         {
//             int profit_Buy = -prices[i] + solveMemo(prices, i + 1, 0, fee, dp);
//             int profit_Buy_ignore = 0 + solveMemo(prices, i + 1, 1, fee, dp);
//             profit = max(profit_Buy, profit_Buy_ignore);
//         }
//         else
//         {
//             int profit_sell =
//                 prices[i] + solveMemo(prices, i + 1, 1, fee, dp) - fee;
//             int profit_sell_ignore = 0 + solveMemo(prices, i + 1, 0, fee, dp);
//             profit = max(profit_sell, profit_sell_ignore);
//         }
//         dp[i][buy] = profit;
//         return dp[i][buy];
//     }
//     int solveTab(vector<int> &prices, int &fee)
//     {
//         int n = prices.size();
//         vector<vector<int>> dp(n + 1, vector<int>(2, 0));
//         int profit = 0;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             for (int buy = 0; buy <= 1; buy++)
//             {
//                 if (buy)
//                 {
//                     int profit_Buy = -prices[i] + dp[i + 1][0];
//                     int profit_Buy_ignore = 0 + dp[i + 1][1];
//                     profit = max(profit_Buy, profit_Buy_ignore);
//                 }
//                 else
//                 {
//                     int profit_sell = prices[i] + dp[i + 1][1] - fee;
//                     int profit_sell_ignore = 0 + dp[i + 1][0];
//                     profit = max(profit_sell, profit_sell_ignore);
//                 }
//                 dp[i][buy] = profit;
//             }
//         }
//         return dp[0][1];
//     }
//     int maxProfit(vector<int> &prices, int fee)
//     {
//         int i = 0;
//         bool buy = 1;
//         // return solve(prices, i, buy, fee);
//         int n = prices.size();
//         vector<vector<int>> dp(n, vector<int>(2, -1));
//         return solveMemo(prices, i, buy, fee, dp);
//         return solveTab(prices,fee);
//     }
// };

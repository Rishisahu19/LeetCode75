// class Solution
// {
// public:
//     bool check(int i, int j, int &n, int &m, vector<vector<int>> &grid)
//     {
//         if (i >= 0 and j >= 0 and i < n and j < m and grid[i][j] == 1)
//         {
//             return true;
//         }
//         return false;
//     }
//     int orangesRotting(vector<vector<int>> &grid)
//     {
//         int n = grid.size();
//         int m = grid[0].size();
//         queue<pair<int, int>> q;
//         int fresh = 0;
//         int time = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (grid[i][j] == 2)
//                 {
//                     q.push({i, j});
//                 }
//                 else if (grid[i][j] == 1)
//                 {
//                     fresh += 1;
//                 }
//             }
//         }
//         if (fresh == 0)
//         {
//             return 0;
//         }
//         while (!q.empty())
//         {
//             int size = q.size();
//             time += 1;
//             while (size--)
//             {
//                 pair<int, int> p = q.front();
//                 q.pop();
//                 int i = p.first;
//                 int j = p.second;
//                 if (check(i - 1, j, n, m, grid))
//                 {
//                     grid[i - 1][j] = 2;
//                     q.push({i - 1, j});
//                     fresh--;
//                 }
//                 if (check(i + 1, j, n, m, grid))
//                 {
//                     grid[i + 1][j] = 2;
//                     q.push({i + 1, j});
//                     fresh--;
//                 }
//                 if (check(i, j - 1, n, m, grid))
//                 {
//                     grid[i][j - 1] = 2;
//                     q.push({i, j - 1});
//                     fresh--;
//                 }
//                 if (check(i, j + 1, n, m, grid))
//                 {
//                     grid[i][j + 1] = 2;
//                     q.push({i, j + 1});
//                     fresh--;
//                 }
//             }
//         }
//         return fresh == 0 ? time - 1 : -1;
//     }
// };
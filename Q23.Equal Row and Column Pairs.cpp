// Brute Force Approach
// class Solution {
//     public:
//         int equalPairs(vector<vector<int>>& grid) {
//             int n = grid.size();
//             int m = grid[0].size();
//             vector<int> Row;
//             vector<int> Col;
//             int cnt = 0;
//             for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < m; j++) {
//                     Row.push_back(grid[i][j]);
//                 }
//                 for (int k = 0; k < m; k++) {
//                     for (int l = 0; l < n; l++) {
//                         Col.push_back(grid[l][k]);
//                     }
//                     if (Row == Col) {
//                         cnt += 1;
//                     }
//                     Col.clear();
//                 }
//                 Row.clear();
//             }
//             return cnt;
//         }
//     };
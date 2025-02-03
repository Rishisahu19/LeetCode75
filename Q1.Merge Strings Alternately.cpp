// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         string st = "";
//         int n = word1.size();
//         int m = word2.size();
//         int i = 0;
//         int j = 0;
//         while (i < n and j < m) {
//             st += word1[i];
//             st += word2[j];
//             i += 1;
//             j += 1;
//         }
//         while (i < n) {
//             st += word1[i];
//             i += 1;
//         }
//         while (j < m) {
//             st += word2[j];
//             j += 1;
//         }
//         return st;
//     }
// };
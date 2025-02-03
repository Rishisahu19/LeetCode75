// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         int n = candies.size();
//         vector<bool> v(n, true);
//         int maxi = *max_element(candies.begin(), candies.end());
//         int X = 0;
//         for (int i = 0; i < n; i++) {
//             X = candies[i] + extraCandies;
//             if (X >= maxi) {
//                 v[i] = true;
//             } else {
//                 v[i] = false;
//             }
//         }
//         return v;
//     }
// };
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int i = 0;
//         int j = n - 1;
//         int H = 0;
//         int W = 0;
//         int maxi = -1;
//         while (i < j) {
//             H = min(height[i], height[j]);
//             W = j - i;
//             maxi = max(maxi, H * W);
//             if (height[i] < height[j]) {
//                 i += 1;
//             } else {
//                 j -= 1;
//             }
//         }
//         return maxi;
//     }
// };
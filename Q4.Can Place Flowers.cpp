// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         if (n == 0) {
//             return true;
//         }
//         int N = flowerbed.size();
//         for (int i = 0; i < N; i++) {
//             if (flowerbed[i] == 0 and
//                 (i - 1 < 0 or (i - 1 > 0 and flowerbed[i - 1] == 0)) and
//                 ((i + 1 == N) or (i + 1 < N and flowerbed[i + 1] == 0))) {
//                 flowerbed[i] = 1;
//                 n--;
//                 if (n == 0) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };
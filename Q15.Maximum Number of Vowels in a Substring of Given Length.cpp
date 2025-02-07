// Approach 1: Brute Force
// class Solution {
//     public:
//         bool Vowel(char ch) {
//             if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') {
//                 return true;
//             }
//             return false;
//         }
//         int maxVowels(string s, int k) {
//             int n = s.size();
//             int cnt = 0;
//             int maxi = INT_MIN;
//             for (int i = 0; i < n - k + 1; i++) {
//                 cnt = 0;
//                 for (int j = i; j < i + k; j++) {
//                     if (Vowel(s[j])) {
//                         cnt += 1;
//                     }
//                 }
//                 maxi = max(maxi, cnt);
//             }
//             return maxi;
//         }
//     };

// Approach 2: Using Sliding Window
// class Solution {
//     public:
//         bool Vowel(char ch) {
//             if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') {
//                 return true;
//             }
//             return false;
//         }
//         int maxVowels(string s, int k) {
//             int n = s.size();
//             int cnt = 0;
//             int maxi = 0;
//             int i = 0;
//             int j = 0;
//             while (j < n) {
//                 if (j - i + 1 < k) {
//                     if (Vowel(s[j])) {
//                         cnt += 1;
//                     }
//                     j += 1;
//                 } else if (j - i + 1 == k) {
//                     if (Vowel(s[j])) {
//                         cnt += 1;
//                         // maxi = max(maxi, cnt);
//                     }
//                     maxi = max(maxi, cnt);
    
//                     if (Vowel(s[i])) {
//                         cnt -= 1;
//                     }
//                     i += 1;
//                     j += 1;
//                 }
//             }
//             return maxi;
//         }
//     };
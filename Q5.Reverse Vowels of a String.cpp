// class Solution {
// public:
//     bool check(char ch) {
//         if ((ch - 'a' >= 0 and ch - 'a' <= 25) and
//             (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')) {
//             return true;
//         }
//         if ((ch - 'A' >= 0 and ch - 'A' <= 25) and
//             (ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')) {
//             return true;
//         }
//         return false;
//     }
//     string reverseVowels(string s) {
//         int i = 0;
//         int j = s.size() - 1;
//         while (i < j) {
//             if ((check(s[i]) and check(s[j]))) {
//                 swap(s[i], s[j]);
//                 i += 1;
//                 j -= 1;
//             } else if (check(s[i])) {
//                 j--;
//             } else if (check(s[j])) {
//                 i++;
//             } else {
//                 i++;
//                 j--;
//             }
//         }
//         return s;
//     }
// };
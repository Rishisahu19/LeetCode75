// Brute Force Approach
// class Solution {
//     public:
//         string removeStars(string s) {
//             for (int i = 0; i < s.size(); i++) {
//                 if (s[i] == '*') {
//                     for (int j = i - 1; j >= 0; j--) {
//                         if (s[j] >= 'a' and s[j] <= 'z') {
//                             s.erase(s.begin() + i);
//                             s.erase(s.begin() + j);
//                             i = i - 2;
//                             break;
//                         }
//                     }
//                 }
//             }
//             return s;
//         }
//     };

//   // Optimized Approach using Stack

// class Solution {
//     public:
//         string removeStars(string s) {
//             stack<char> st;
//             int n = s.size();
//             for (int i = 0; i < n; i++) {
//                 if (s[i] == '*') {
//                     st.pop();
//                 } else {
//                     st.push(s[i]);
//                 }
//             }
//             string ans = "";
//             while (!st.empty()) {
//                 ans += st.top();
//                 st.pop();
//             }
//             reverse(ans.begin(), ans.end());
//             return ans;
//         }
//     };

// Optimized Approach pop_back() function 

// class Solution {
//     public:
//         string removeStars(string s) {
//             int n = s.size();
//             string ans = "";
//             for (int i = 0; i < n; i++) {
//                 if (s[i] == '*') {
//                     ans.pop_back();
//                 } else {
//                     ans += s[i];
//                 }
//             }
//             return ans;
//         }
//     };
// class Solution {
// public:
//     string reverseWords(string s) {
//         const int n = s.size();
//         string st = "";
//         vector<string> v;
//         for (int i = 0; i < n; i++) {
//             if (s[i] != ' ') {
//                 st += s[i];
//             } else {
//                 if (st.size() > 0) {
//                     v.push_back(st);
//                     st = "";
//                 }
//             }
//         }
//         if (st != "") {
//             v.push_back(st);
//         }
//         reverse(v.begin(), v.end());
//         string ans = "";
//         for (int i = 0; i < v.size(); i++) {
//             ans += v[i];
//             if (i != v.size() - 1) {
//                 ans += " ";
//             }
//         }
//         return ans;
//     }
// };
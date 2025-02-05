// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int n = chars.size();
//         int cnt = 1;
//         string str = "";
//         vector<char> v;
//         for (int i = 0; i < n; i++) {
//             if ((i + 1 < n) and chars[i] == chars[i + 1]) {
//                 cnt += 1;
//             } else {
//                 v.push_back(chars[i]);
//                 if (cnt > 1 and cnt <= 9) {
//                     v.push_back((cnt) + '0');
//                 }
//                 if (cnt > 9) {
//                     string st = to_string(cnt);
//                     int idx = 0;
//                     while (idx < st.size()) {
//                         v.push_back(st[idx]);
//                         idx += 1;
//                     }
//                 }

//                 cnt = 1;
//             }
//         }
//         chars.clear();
//         chars = v;
//         return chars.size();
//     }
// };
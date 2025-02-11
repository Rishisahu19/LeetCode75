// class Solution {
//     public:
//         string predictPartyVictory(string senate) {
//             queue<int> radiant, dire;
//             int n = senate.size();
    
//             for (int i = 0; i < n; i++) {
//                 if (senate[i] == 'R')
//                     radiant.push(i);
//                 else
//                     dire.push(i);
//             }
    
//             while (!radiant.empty() && !dire.empty()) {
//                 int r_idx = radiant.front();
//                 int d_idx = dire.front();
//                 radiant.pop();
//                 dire.pop();
    
//                 if (r_idx < d_idx)
//                     radiant.push(r_idx + n);
//                 else
//                     dire.push(d_idx + n);
//             }
    
//             return radiant.empty() ? "Dire" : "Radiant";
//         }
//     };
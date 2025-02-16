// class Solution {
//     public:
//         bool canVisitAllRooms(vector<vector<int>>& rooms) {
//             int n = rooms.size();
//             vector<bool> Visited(n, false);
//             queue<int> Q;
//             Q.push(0);
//             Visited[0] = true;
//             while (!Q.empty()) {
//                 int RoomKey = Q.front();
//                 Q.pop();
//                 for (auto i : rooms[RoomKey]) {
//                     if (!Visited[i]) {
//                         Q.push(i);
//                         Visited[i] = true;
//                     }
//                 }
//             }
//             for (int i = 0; i < n; i++) {
//                 if (!Visited[i]) {
//                     return false;
//                 }
//             }
//             return true;
//         }
//     };
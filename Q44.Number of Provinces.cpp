// class Solution
// {
// public:
//     void DFS(int Node, unordered_map<int, vector<int>> &AdjList,
//              vector<int> &Visited)
//     {
//         Visited[Node] = true;
//         for (auto Nbr : AdjList[Node])
//         {
//             if (!Visited[Nbr])
//             {
//                 DFS(Nbr, AdjList, Visited);
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>> &isConnected)
//     {
//         //      1 2 3
//         //   1 [1, 1, 0]
//         //   2 [1, 1, 0]
//         //   3 [0, 0, 1]

//         unordered_map<int, vector<int>> AdjList;
//         int n = isConnected.size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (isConnected[i][j] == 1)
//                 {
//                     AdjList[i].push_back(j);
//                 }
//             }
//         }
//         // for (auto i : AdjList) {
//         //     cout << i.first << "->";
//         //     for (auto Nbr : i.second) {
//         //         cout << Nbr << " ";
//         //     }
//         //     cout << endl;
//         // }

//         vector<int> Visited(n, false);
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (!Visited[i])
//             {
//                 ans += 1;
//                 DFS(i, AdjList, Visited);
//             }
//         }
//         return ans;
//     }
// };
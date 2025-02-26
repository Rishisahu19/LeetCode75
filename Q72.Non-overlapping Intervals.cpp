// class Solution
// {
// public:
//     int eraseOverlapIntervals(vector<vector<int>> &intervals)
//     {
//         int n = intervals.size();
//         sort(intervals.begin(), intervals.end());
//         int cnt = 0;
//         vector<int> PreInterval = intervals[0];
//         int i = 1;
//         while (i < n)
//         {
//             if (PreInterval[1] <= intervals[i][0])
//             {
//                 PreInterval = intervals[i];
//                 i += 1;
//             }
//             else if (PreInterval[1] <= intervals[i][1])
//             {
//                 i += 1;
//                 cnt += 1;
//             }
//             else if (PreInterval[1] >= intervals[i][1])
//             {
//                 PreInterval = intervals[i];
//                 i += 1;
//                 cnt += 1;
//             }
//         }
//         return cnt;
//     }
// };
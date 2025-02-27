// class Solution
// {
// public:
//     vector<int> NGE(vector<int> &arr)
//     {
//         stack<int> st;
//         vector<int> v(arr.size(), 0);
//         int n = arr.size();

//         for (int i = n - 1; i >= 0; i--)
//         {
//             while (!st.empty() && arr[st.top()] <= arr[i])
//             {
//                 st.pop();
//             }
//             if (st.empty())
//             {
//                 v[i] = -1;
//             }
//             else
//             {
//                 v[i] = st.top();
//             }
//             st.push(i);
//         }

//         return v;
//     }

//     vector<int> dailyTemperatures(vector<int> &temperatures)
//     {
//         vector<int> v = NGE(temperatures);
//         vector<int> result(temperatures.size());

//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] == -1)
//             {
//                 result[i] = 0;
//             }
//             else
//             {
//                 result[i] = v[i] - i;
//             }
//         }
//         return result;
//     }
// };

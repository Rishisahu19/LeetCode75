// class Solution
// {
// public:
//     void solve(int idx, string &digits, string &st, vector<string> &ans,
//                unordered_map<int, vector<string>> &mp)
//     {
//         if (idx == digits.size())
//         {
//             ans.push_back(st);
//             return;
//         }
//         vector<string> v = mp[digits[idx] - '0'];
//         for (int i = 0; i < v.size(); i++)
//         {
//             st = st + v[i];
//             solve(idx + 1, digits, st, ans, mp);
//             st.pop_back();
//         }
//     }
//     vector<string> letterCombinations(string digits)
//     {
//         if (digits.empty())
//         {
//             return {};
//         }
//         unordered_map<int, vector<string>> mp = {
//             {2, {"a", "b", "c"}}, {3, {"d", "e", "f"}}, {4, {"g", "h", "i"}}, {5, {"j", "k", "l"}}, {6, {"m", "n", "o"}}, {7, {"p", "q", "r", "s"}}, {8, {"t", "u", "v"}}, {9, {"w", "x", "y", "z"}}};
//         int n = digits.size();
//         vector<string> ans;
//         string st = "";
//         solve(0, digits, st, ans, mp);
//         return ans;
//     }
// };
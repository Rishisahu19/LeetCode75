// Approach 1: Brute Force

// class Solution
// {
// public:
//     vector<int> successfulPairs(vector<int> &spells, vector<int> &potions,
//                                 long long success)
//     {
//         int n = spells.size();
//         int m = potions.size();
//         int cnt = 0;
//         vector<int> v;
//         long long mul = 1;
//         long long check = 0;
//         for (int i = 0; i < n; i++)
//         {
//             mul = spells[i];
//             for (int j = 0; j < m; j++)
//             {
//                 check = mul * potions[j];
//                 if (check >= success)
//                 {
//                     cnt += 1;
//                 }
//             }
//             v.push_back(cnt);
//             cnt = 0;
//         }
//         return v;
//     }
// };

// Approach 2: Binary Search

// class Solution
// {
// public:
//     vector<int> successfulPairs(vector<int> &spells, vector<int> &potions,
//                                 long long success)
//     {
//         int m = spells.size();

//         int n = potions.size();

//         sort(begin(potions), end(potions));

//         int maxPotion = potions[n - 1];

//         vector<int> answer;

//         for (int i = 0; i < m; i++)
//         {

//             int spell = spells[i];

//             long long minPotion = ceil((1.0 * success) / spell);

//             if (minPotion > maxPotion)
//             {
//                 answer.push_back(0);
//                 continue;
//             }

//             int index = lower_bound(begin(potions), end(potions), minPotion) -
//                         begin(potions);

//             answer.push_back(n - index);
//         }

//         return answer;
//     }
// };

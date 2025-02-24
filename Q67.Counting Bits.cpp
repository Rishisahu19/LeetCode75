// // Approach 1
// class Solution
// {
// public:
//     int Bit(int n)
//     {
//         int cnt = 0;
//         while (n != 0)
//         {
//             cnt += n % 2;
//             n = n / 2;
//         }
//         return cnt;
//     }
//     vector<int> countBits(int n)
//     {
//         vector<int> v;
//         for (int i = 0; i <= n; i++)
//         {
//             v.push_back(Bit(i));
//         }
//         return v;
//     }
// };
// // Approach 2

// class Solution
// {
// public:
//     vector<int> countBits(int n)
//     {
//         vector<int> v;
//         for (int i = 0; i <= n; i++)
//         {
//             v.push_back(__builtin_popcount(i));
//         }
//         return v;
//     }
// };
// // Approach 3

// class Solution
// {
// public:
//     int Bit(int n)
//     {
//         int cnt = 0;
//         while (n != 0)
//         {
//             if (n % 2 == 1)
//             {
//                 cnt += 1;
//             }
//             n = n / 2;
//         }
//         return cnt;
//     }
//     vector<int> countBits(int n)
//     {
//         vector<int> v;
//         for (int i = 0; i <= n; i++)
//         {
//             v.push_back(Bit(i));
//         }
//         return v;
//     }
// };

// class Solution
// {
// public:
//     vector<int> countBits(int n)
//     {
//         vector<int> v;
//         for (int i = 0; i <= n; i++)
//         {
//             v.push_back(__builtin_popcount(i));
//         }
//         return v;
//     }
// };
// Approach 1: Simple Linear Search

// class Solution
// {
// public:
//     int guessNumber(int n)
//     {
//         int Guess = 0;
//         for (int num = 1; num <= n;)
//         {
//             Guess = guess(num);
//             if (Guess == -1)
//             {
//                 num--;
//             }
//             else if (Guess == 1)
//             {
//                 num++;
//             }
//             else
//             {
//                 return num;
//             }
//         }
//         return -1;
//     }
// };

// Approach 2: Simple Linear Search

// class Solution
// {
// public:
//     int guessNumber(int n)
//     {
//         int Guess = 0;
//         for (int num = 1; num <= n; num++)
//         {
//             Guess = guess(num);
//             if (Guess == 0)
//             {
//                 return num;
//             }
//         }
//         return -1;
//     }
// };

// Approach 3: Binary Search

// class Solution
// {
// public:
//     int guessNumber(int n)
//     {
//         int Guess = 0;
//         int Low = 1;
//         int High = n;
//         int mid = 0;
//         while (Low <= High)
//         {
//             mid = Low + (High - Low) / 2;
//             Guess = guess(mid);
//             if (Guess == 0)
//             {
//                 return mid;
//             }
//             else if (Guess == -1)
//             {
//                 mid = High - 1;
//             }
//             else
//             {
//                 mid = Low + 1;
//             }
//         }
//         return -1;
//     }
// };
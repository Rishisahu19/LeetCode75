// class Solution {
//     public:
//         string decodeString(string s) {
//             stack<string> strStack;
//             stack<int> numStack;
//             string currentStr = "";
//             int num = 0;
    
//             for (char c : s) {
//                 if (isdigit(c)) {
//                     num = num * 10 + (c - '0');
//                 } else if (c == '[') {
//                     numStack.push(num);
//                     strStack.push(currentStr);
//                     num = 0;
//                     currentStr = "";
//                 } else if (c == ']') {
//                     string temp = currentStr;
//                     int repeatTimes = numStack.top();
//                     numStack.pop();
//                     currentStr = strStack.top();
//                     strStack.pop();
                    
//                     while (repeatTimes--) {
//                         currentStr += temp;
//                     }
//                 } else {
//                     currentStr += c;
//                 }
//             }
//             return currentStr;
//         }
//     };
    
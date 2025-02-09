// Brute force approach 
// class Solution {
//     public:
//         vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//             vector<vector<int>> ans;
//             vector<int> v;
//             set<int> st;
//             int n = nums1.size();
//             int m = nums2.size();
//             bool check = true;
//             for (int i = 0; i < n; i++) {
//                 check = true;
//                 for (int j = 0; j < m; j++) {
//                     if (nums1[i] == nums2[j]) {
//                         check = false;
//                         break;
//                     }
//                 }
//                 if (check) {
//                     st.insert(nums1[i]);
//                 }
//             }
//             // vector<int>v(st.begin(), st.end());
//             v.assign(st.begin(), st.end());
//             ans.push_back(v);
//             st.clear();
//             for (int i = 0; i < m; i++) {
//                 check = true;
//                 for (int j = 0; j < n; j++) {
//                     if (nums2[i] == nums1[j]) {
//                         check = false;
//                         break;
//                     }
//                 }
//                 if (check) {
//                     st.insert(nums2[i]);
//                 }
//             }
//             v.assign(st.begin(), st.end());
//             ans.push_back(v);
    
//             return ans;
//         }
//     };

// Optimized approach using unordered_map

// class Solution {
//     public:
//         vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//             unordered_map<int, int> mp1;
//             unordered_map<int, int> mp2;
//             vector<vector<int>> ans;
//             int n = nums1.size();
//             int m = nums2.size();
//             for (int i = 0; i < n; i++) {
//                 mp1[nums1[i]]++;
//             }
//             for (int i = 0; i < m; i++) {
//                 mp2[nums2[i]]++;
//             }
//             vector<int> v;
//             for (auto i : mp1) {
//                 if (mp2.find(i.first) == mp2.end()) {
//                     v.push_back(i.first);
//                 }
//             }
//             ans.push_back(v);
//             v.clear();
//             for (auto i : mp2) {
//                 if (mp1.find(i.first) == mp1.end()) {
//                     v.push_back(i.first);
//                 }
//             }
//             ans.push_back(v);
//             return ans;
//         }
//     };

// Optimized approach using unordered_set

// class Solution {
//     public:
//         vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//             unordered_set<int> st1;
//             unordered_set<int> st2;
//             vector<vector<int>> ans;
//             int n = nums1.size();
//             int m = nums2.size();
//             for (int i = 0; i < n; i++) {
//                 st1.insert(nums1[i]);
//             }
//             for (int i = 0; i < m; i++) {
//                 st2.insert(nums2[i]);
//             }
//             vector<int> v;
//             for (auto i : st1) {
//                 if (st2.find(i) == st2.end()) {
//                     v.push_back(i);
//                 }
//             }
//             ans.push_back(v);
//             v.clear();
//             for (auto i : st2) {
//                 if (st1.find(i) == st1.end()) {
//                     v.push_back(i);
//                 }
//             }
//             ans.push_back(v);
//             return ans;
//         }
//     };
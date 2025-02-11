// class RecentCounter {
//     public:
//         int count = 0;
//         vector<int> v;
//         RecentCounter() {}
    
//         int ping(int t) {
//             int start = t - 3000;
//             int end = t;
//             v.push_back(t);
//             count = 0;
//             for (int i = 0; i < v.size(); i++) {
//                 if (v[i] >= start and v[i] <= end) {
//                     count += 1;
//                 }
//             }
//             return count;
//         }
//     };
    
//     /**
//      * Your RecentCounter object will be instantiated and called as such:
//      * RecentCounter* obj = new RecentCounter();
//      * int param_1 = obj->ping(t);
//      */
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// Using Vector
// class Solution {
//     public:
//         int pairSum(ListNode* head) {
//             vector<int> v;
//             ListNode* temp = head;
//             while (temp != NULL) {
//                 v.push_back(temp->val);
//                 temp = temp->next;
//             }
//             int sum = 0;
//             int maxi = INT_MIN;
//             int n = v.size();
//             for (int i = 0; i < n / 2; i++) {
//                 sum += v[i];
//                 sum += v[n - 1 - i];
//                 maxi = max(maxi, sum);
//                 sum = 0;
//             }
//             return maxi;
//         }
//     };



// Using Slow and Fast Pointer

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
//     public:
//         ListNode* Rev(ListNode* head) {
//             ListNode* Prev = NULL;
//             ListNode* Curr = head;
//             ListNode* Forw = NULL;
//             while (Curr != NULL) {
//                 Forw = Curr->next;
//                 Curr->next = Prev;
//                 Prev = Curr;
//                 Curr = Forw;
//             }
//             return Prev;
//         }
//         int pairSum(ListNode* head) {
//             ListNode* slow = head;
//             ListNode* fast = head->next;
//             while (fast->next != NULL) {
//                 slow = slow->next;
//                 fast = fast->next->next;
//             }
//             ListNode* List2 = Rev(slow->next);
//             slow->next = NULL;
//             ListNode* List1 = head;
//             int maxi = INT_MIN;
//             int sum = 0;
//             while (List1 != NULL and List2 != NULL) {
//                 sum = (List1->val + List2->val);
//                 maxi = max(maxi, sum);
//                 List1 = List1->next;
//                 List2 = List2->next;
//             }
//             return maxi;
//         }
//     };
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
// Approach 1
// class Solution {
//     public:
//         ListNode* deleteMiddle(ListNode* head) {
//             if(!head || !head->next){
//                 return NULL;
//             }
//             int len = 0;
//             ListNode* temp = head;
//             while (temp != NULL) {
//                 len += 1;
//                 temp = temp->next;
//             }
//             int mid = len / 2;
//             temp = head;
//             while (temp != NULL) {
//                 mid--;
//                 if (mid == 0) {
//                     temp->next = temp->next->next;
//                 }
//                 temp = temp->next;
//             }
//             return head;
//         }
//     };

// 
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

//  Approach 2 
// class Solution {
//     public:
//         ListNode* deleteMiddle(ListNode* head) {
//             if (!head || !head->next) {
//                 return NULL;
//             }
//             int len = 0;
//             ListNode* temp = head;
//             while (temp != NULL) {
//                 len += 1;
//                 temp = temp->next;
//             }
//             int mid = len / 2;
//             temp = head;
//             ListNode* Prev = NULL;
//             while (mid--) {
//                 Prev = temp;
//                 temp = temp->next;
//             }
//             Prev->next = temp->next;
//             delete temp;
//             return head;
//         }
//     };
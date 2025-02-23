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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* mover = head->next;
        ListNode* nxt_sum = mover;
        while(nxt_sum != nullptr){
            int sum = 0;
            while(nxt_sum->val != 0){
                sum+=nxt_sum->val;
                nxt_sum = nxt_sum->next;
            }
            mover->val = sum;
            nxt_sum = nxt_sum->next;
            mover->next = nxt_sum;
            mover = mover->next;
        }
        return head->next;
        
    }
};
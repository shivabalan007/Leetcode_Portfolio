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
    ListNode* reverseList(ListNode* head) {
        stack<int> rev;
        ListNode* temp = head;
        while(temp != NULL){
            rev.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while(temp != NULL){
            temp->val = rev.top();
            rev.pop();
            temp = temp->next;
        }

        return head;
    }
};
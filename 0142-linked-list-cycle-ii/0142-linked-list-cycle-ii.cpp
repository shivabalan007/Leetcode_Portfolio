/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> visitedNode;
        while(temp != NULL){
            if(visitedNode.find(temp) != visitedNode.end()){
                return temp;
            }
            visitedNode[temp]=1;
            temp = temp->next;
        }
        return nullptr;
    }
};
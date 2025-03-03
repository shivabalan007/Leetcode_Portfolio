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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> visitedNode;
        ListNode* temp = head;
        while(temp != NULL){
            if(visitedNode.find(temp) != visitedNode.end()){
                return true;
            }
            visitedNode[temp] = 1;
            temp = temp->next;
        }
        return false;
    }
};
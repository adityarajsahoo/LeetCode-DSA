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
    ListNode* middleNode(ListNode* head) {
        ListNode* c = head;
        int size = 0;
        while(c!=NULL){
            c = c->next;
            size++;
        }
        size = size/2;
        c = head;
        while(c && size--){
            c = c->next;
        }
        return c;
    }
};
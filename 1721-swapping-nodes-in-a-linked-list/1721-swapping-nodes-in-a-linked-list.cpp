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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* c = head;
        ListNode* L1 = NULL;
        ListNode* R1 = NULL;
        int count = 1;
        int size = 0;
        while(c!=NULL){
            c=c->next;
            size++;
        }
        c = head;
        
        while(c!=NULL){
            if(count == k){
                L1 = c;
            }
            if(count == size - k + 1){
                R1 = c;
            }
            c = c->next;
            count++;
        }
        swap(L1->val,R1->val);
        return head;
    }
};
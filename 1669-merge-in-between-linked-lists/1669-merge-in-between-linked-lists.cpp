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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count = 1;
        ListNode* curr = list1;
        ListNode* d1;
        ListNode* e1;
        while(curr!=NULL){
            if(count==a){
                d1 = curr;
            }
            if(count==b){
                e1 = curr->next->next;
            }
            count++;
            curr = curr->next;
        }
        d1->next = list2; // points to the head of list 2
        curr = list2;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = e1; // new LL is formed
        return list1;
    }
};
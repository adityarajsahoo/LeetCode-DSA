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
private:
    ListNode* getMiddle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while (fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* getReverse (ListNode* mid){
    ListNode* curr=mid;
    ListNode* prev=NULL;
    ListNode* next=NULL;
    while (curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
public:
    bool isPalindrome(ListNode* head) {
        if (head->next==NULL)
            return true;
        //step 1:get middle node
        ListNode* mid=getMiddle(head);
        //step 2: reverse list after the middle node
        ListNode* temp=mid->next;
        mid->next=getReverse(temp);
        
        // step3: compare both the halves of the nodes
        ListNode* head1=head;
        ListNode* head2=mid->next;
        while (head2!=NULL){
            if (head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        // step 4: make the list original by reversing the second half
        temp=mid->next;
        mid->next=getReverse(temp);
        
        return true;
    }
};
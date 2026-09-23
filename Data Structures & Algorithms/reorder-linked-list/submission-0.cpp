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
ListNode* reverse_list(ListNode* head){
    ListNode* cur=head;
    ListNode* prev=nullptr;
    ListNode* next=nullptr;
    while(cur){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
       ListNode* temp=slow->next;
       slow->next=nullptr;
       ListNode* cur2=reverse_list(temp);
       ListNode* cur1=head;
       ListNode* temp1=nullptr;
       while(cur1&&cur2){
        temp=cur1->next;
        cur1->next=cur2;
        temp1=cur2->next;
        cur2->next=temp;
        cur1=temp;
        cur2=temp1;
       }
    }
};

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cur1=l1;
        ListNode* cur2=l2;
        int carry=0;
        ListNode dummy(0);
        ListNode* temp=&dummy;
        while(cur1&&cur2){
            int sum=cur1->val+cur2->val+carry;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            cur1=cur1->next;cur2=cur2->next;
        }
        if(cur1){
            while(cur1){
                int sum=cur1->val+carry;
                carry=sum/10;
                temp->next=new ListNode(sum%10);
                temp=temp->next;
                cur1=cur1->next;
            }
        }
        else {
            while(cur2){
                int sum=cur2->val+carry;
                carry=sum/10;
                temp->next=new ListNode(sum%10);
                temp=temp->next;
                cur2=cur2->next;
            }
        }
            if(carry){
                temp->next=new ListNode(carry);
            }

        return dummy.next;
    }
};

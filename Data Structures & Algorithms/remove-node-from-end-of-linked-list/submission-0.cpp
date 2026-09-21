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

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* a = head;
        ListNode* b = head;

        while (n--) {
            b = b->next;
        }

        // If b is nullptr, we need to remove the head node
        if (!b) {
            ListNode* temp = head;
            head = head->next;
            delete temp; // C++ delete instead of free
            return head;
        }

        while (b->next) {
            a = a->next;
            b = b->next;
        }

        ListNode* temp = a->next;
        a->next = temp->next;
        delete temp;

        return head;
    }
};
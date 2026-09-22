/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy =new Node(0);
        Node* temp=dummy;
        Node* cur=head;
        unordered_map<Node*,Node*>mp;
        while(cur){
            temp->next=new Node(cur->val);
            temp=temp->next;
            mp[cur]=temp;
            cur=cur->next;
        }
         cur=head;
         temp=dummy->next;
         while(cur){
            temp->random=mp[cur->random];
            temp=temp->next;
            cur=cur->next;
         }
         return dummy->next;
    }
};

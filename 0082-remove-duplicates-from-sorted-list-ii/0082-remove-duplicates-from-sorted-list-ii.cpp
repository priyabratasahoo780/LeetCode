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
    ListNode* deleteDuplicates(ListNode* head) {
        // ListNode* prev = head;
        // ListNode* temp = head->next;
        // ListNode* s = nullptr;
        // if(head == nullptr && head->next == nullptr){
        //      return head;
        // }
        // while(temp != nullptr && temp->next != nullptr){
        //     // if(prev == temp){
        //         // while(prev->val = temp->next)
        //         // prev = temp->next;
        //     // }

        //     if(prev->val == temp->val){
        //            temp->next = temp->next->next;
        //            prev = temp->next;
        //     }
        // }

        if (head == nullptr) return head;
        ListNode* i = head;
        ListNode* j = head->next;
        ListNode* t = new ListNode(0);
        ListNode* temp = t;
        while(j != nullptr){
            if(i->val == j->val){
                j = j->next;
            }
            else{
                if(i->val == i->next->val){
                    i = j;
                    j = j->next;
                } 
                else{
                    t->next = i;
                    i = i->next;
                    j = j->next;
                    t = t->next;
                }
            }
        }
        if(i->next == nullptr){
            t->next = i;
            t = t->next;
        }
        t->next = nullptr;
        return temp->next;
    }
};




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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* t = new ListNode(0);
        ListNode* temp = t;

        ListNode* i = list1;
        ListNode* j = list2;

        while (i != nullptr && j != nullptr) {

            if (i->val <= j->val) {
                temp->next = i;
                i = i->next;
            }
            else {
                temp->next = j;
                j = j->next;
            }

            temp = temp->next;
        }

        if (i != nullptr) {
            temp->next = i;
        }
        else {
            temp->next = j;
        }

        return t->next;
    }
};
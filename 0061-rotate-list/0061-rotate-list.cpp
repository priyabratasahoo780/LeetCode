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
    ListNode* rotateRight(ListNode* head, int k) {
      ListNode* temp = head;

       if(temp == nullptr || temp->next == nullptr){
            return head;
       }
       int count = 0;
            while(temp != nullptr){
                count++;
                temp = temp->next;
            }

            k = k%count;
            temp = head;

            for(int i=0; i<k; i++){
                while(temp->next->next != nullptr){
                    temp = temp->next;
                }
                ListNode* newNode = temp->next;
                temp->next = nullptr;
                newNode->next = head;
                head = newNode;
                temp = head;
            }
            return head;
    }
};
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
        ListNode* reversed(ListNode* head){
        ListNode* nextNode = nullptr;
        ListNode* current = head;
        ListNode* prev = nullptr;
           while(current != nullptr){
                 nextNode = current->next;
                 current->next = prev;
                 prev = current;
                 current = nextNode;
           }
              return prev;
          }
            
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return true;
        } 
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr){
             slow = slow->next;
             fast = fast->next->next;
        }
             ListNode* secondHalf = reversed(slow->next);
             ListNode* firstHalf = head;

             ListNode* temp = secondHalf;
             while(temp != nullptr){
                if(firstHalf->val != temp->val){
                    return false;
                }
                   firstHalf = firstHalf->next;
                   temp = temp->next;
             }
        
        return true;
    }
};
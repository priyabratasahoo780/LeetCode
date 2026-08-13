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
    vector<int> nextLargerNodes(ListNode* head) {
    //     vector<int>temp;
    //     while(head != nullptr){
    //         temp.push_back(head->val);
    //         head = head->next;
    //     }
    //    vector<int>ans(temp.size(),0);
    //    for(int i=0; i<ans.size(); i++){
    //      for(int j=i+1; j<ans.size(); j++){
    //         if(ans[i] > ans[j]){
    //            ans[i] = temp[j];
    //            break;
    //         }
    //      }
    //    }
    //    return ans;


        vector<int> ans;
        ListNode* temp = head;
        while (temp != nullptr) {
            ListNode* temp1 = temp->next;
            bool found = false;
            while (temp1 != nullptr) {
                if (temp1->val > temp->val) {
                    ans.push_back(temp1->val);
                    found = true;
                    break;
                }
                temp1 = temp1->next;
            }
            if (!found) {
                ans.push_back(0);
            }
            temp = temp->next;
        }
        return ans;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) {
            return head;
        }
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->child == nullptr) {
                temp = temp->next;
            }
            else {
                Node* next = temp->next;
                Node* child = temp->child;
                temp->next = child;
                child->prev = temp;
                while (child->next != nullptr) {
                    child = child->next;
                }
                child->next = next;
                if (next != nullptr) {
                    next->prev = child;
                }
                temp->child = nullptr;
                temp = temp->next;
            }
        }
        return head;
    }
};
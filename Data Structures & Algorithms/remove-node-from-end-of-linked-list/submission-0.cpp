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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int size = 0;
        while(curr != nullptr){
            size++;
            curr = curr->next;
        }
        if(n == size){
            return head->next;
        }
        curr = head;
        int cn = 1;
        while(curr != nullptr){
            if(size - cn == n){
                curr->next = curr->next->next;
            }
            cn++;
            curr = curr->next;
        }
        return head;
    }
};

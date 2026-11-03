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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        //finding the fast and slow index
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        //reverse the linked list after the half
        ListNode* head2 = slow->next;
        slow->next = nullptr;

        ListNode* prev2 = nullptr;
        while(head2){
            if(head2 == slow){
                head2 = head2->next;
                slow->next = nullptr;
                continue;
            } 
            ListNode* temp = head2->next;
            head2->next = prev2;
            prev2 = head2;
            head2 = temp;
                    }
        //merging
        head2 = prev2;
        ListNode* head3 =head;
        while(head2){
            ListNode* temp1 = head3->next;
            ListNode* temp2 = head2->next;
            head3->next = head2;
            head2->next = temp1;
            head3 = temp1;
            head2 = temp2;
        }
            }
};

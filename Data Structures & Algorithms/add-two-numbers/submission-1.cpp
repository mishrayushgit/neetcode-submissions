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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* newNode = new ListNode(0);
        ListNode* currnew = newNode;
        int c = 0;
        while (curr1 || curr2 || c) {
            int val1 = curr1 ? curr1->val : 0;
            int val2 = curr2 ? curr2->val : 0;

            int sum = val1 + val2 + c;

            c = sum / 10;
            sum = sum % 10;

            ListNode* nodee = new ListNode(sum);
            currnew->next = nodee;
            currnew = currnew->next;

            if (curr1) curr1 = curr1->next;
            if (curr2) curr2 = curr2->next;
        }

        return newNode->next;
    }
};

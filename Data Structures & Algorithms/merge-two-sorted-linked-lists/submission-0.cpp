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
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* newList = new ListNode();
        ListNode* currnew = newList;
        while(curr1 != nullptr && curr2 != nullptr){
            if(curr1->val > curr2->val){
                ListNode* newNode = new ListNode(curr2->val);
                currnew->next = newNode;
                curr2 = curr2->next;
                currnew = currnew->next;
            }
            else{
               ListNode* newNode = new ListNode(curr1->val);
                currnew->next = newNode;
                curr1 = curr1->next; 
                currnew = currnew->next;
            }
        }
        while(curr1 != nullptr){
            ListNode* newNode = new ListNode(curr1->val);
                currnew->next = newNode;
                curr1 = curr1->next; 
                currnew = currnew->next;
        }
        while(curr2 != nullptr){
            ListNode* newNode = new ListNode(curr2->val);
                currnew->next = newNode;
                curr2 = curr2->next;
                currnew = currnew->next;
        }
        return newList->next;
    }
};

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr){
            return nullptr;
        }
        unordered_map<Node*, int> mapo1;
        unordered_map<int,Node*> mapo2;
        Node* curr1 = head;
        int it = 0;
        while(curr1 != nullptr){
            mapo1[curr1] = it;
            it++;
            curr1 = curr1->next;
        }
        Node* newHead = new Node(0);
        Node* curr2 = newHead;
        it = 0;
        curr1 = head;
        while(curr1 != nullptr){
            Node* newNode = new Node(curr1->val);
            curr2->next = newNode;
            curr2 = newNode;
            mapo2[it] = curr2;
            it++;
            curr1 = curr1->next;
        }
        newHead = newHead->next;
        curr1 = head;
        curr2 = newHead;
        while(curr1 != nullptr){
            if(curr1->random != nullptr){
                curr2->random = mapo2[mapo1[curr1->random]];
                
            }
            curr2 = curr2->next;
            curr1 = curr1->next;
            
        }
        return newHead;

    }
};

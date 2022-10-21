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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* temp = head;
        ListNode* pemt = head;
        ListNode* empt = NULL;
        
        
        while(pemt){     
            pemt= temp->next;
            temp->next = empt;
            empt = temp;
            temp = pemt;
        }
        
        return empt;       
    }
};
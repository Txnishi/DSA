/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* temp = head;
        ListNode* pemt = head;
        
        if(head == NULL || head->next == NULL){
            return false;
        }
        
        while(temp && pemt && pemt->next){
            temp = temp->next;
            pemt = pemt->next->next;
            if(pemt == temp){
                return true;
            }
            
        }
       
    
        return false;
    }
};
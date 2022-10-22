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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* temp = head;
        ListNode* nnode = new ListNode(-1);
        
        
        
        if(head == NULL){
            return head;
        }  
        
        nnode->next = temp;
        
        head = nnode;
        temp =  head;
        
        
        while(temp && temp->next ){
            
            if(temp->next->val == val){
                temp->next = temp->next->next;
                continue;
            }
            
            temp = temp->next;
        }
        
        head = head->next;
        
        if(temp->val == val){
                head= NULL;
        }
            
        
        return head;
    }
};
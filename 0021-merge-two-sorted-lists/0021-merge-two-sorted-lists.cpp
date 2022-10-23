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
        
        ListNode* head = new ListNode(-1);
        ListNode* result = head;
        ListNode* one = list1;
        ListNode* two = list2;
        
        
        if(list1 == NULL){
            return list2;
        }else if(list2 == NULL){
            return list1;
        }
        
        while(one && two){
            
            if(one->val == two->val){
                head->next = one;
                head = one;
                one = one->next;
                head->next = two;
                head = two;
                two = two->next;
                continue;
            }
            
            if(one->val < two->val){
                head->next = one;
                head = one;
                one = one->next;
                continue;
            }
            if(one->val > two->val){
                head->next = two;
                head = two;
                two = two->next;
                continue;
            }
           
        }
        
        if(one == NULL){
            head->next = two;
        }
        if(two == NULL){
            head->next = one;
        }
        
        
        
       result = result->next; 
       return result; 
        
    }
};
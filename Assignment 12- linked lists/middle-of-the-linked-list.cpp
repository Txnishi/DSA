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
    

        
    ListNode* middleNode(ListNode* head) {
        
        int i = 0;
        unsigned int len = 0;
        ListNode* temp = head;
        ListNode* pemt= head;
        
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        int mid = (len/2);
        int count = 0;
        temp = head;
        while(temp!=NULL){
            if(count == mid){
                return temp;
            } else{
                count = count + 1;
                temp = temp->next;
            }
        }

        return temp;


    }
};

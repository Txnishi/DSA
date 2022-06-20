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
#include <bits/stdc++.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current; 
            current = next;
        }
        head = prev;
        
        ListNode* temp = head;
        
        int sum = 0;
        int i = 0;
        while(temp != NULL){
            sum += (temp->val) * pow(2,i);
            i++;
            temp = temp->next;
        }
        
        return sum;
    }
};

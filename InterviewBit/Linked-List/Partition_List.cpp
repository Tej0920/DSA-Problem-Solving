/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int x) {
    ListNode* small = new ListNode(0);
    ListNode* high = new ListNode(0);
    
    ListNode* smaller_head = small, *higher_head = high;
    
    while(head!=NULL){
        if(head->val<x){
            smaller_head->next = head;
            smaller_head = smaller_head->next;
        }
        else{
            higher_head->next = head;
            higher_head = higher_head->next;
        }
        head = head->next;
    }
    
    smaller_head->next = high->next;
    higher_head->next = NULL;
    
    return small->next;
}

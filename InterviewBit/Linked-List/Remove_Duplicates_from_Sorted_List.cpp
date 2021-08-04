/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* head = A;
    
    while(head->next!=NULL){
        if(head->val == head->next->val){
            head->next = head->next->next;
        }
        else{
            head = head->next;
        }
    }
    
    return A;
}

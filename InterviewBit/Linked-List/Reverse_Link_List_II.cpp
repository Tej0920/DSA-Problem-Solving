/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
    if(head==NULL){
        return head;
    }
    
    ListNode* prev = NULL;
    ListNode* curr = head;
    
    while(m>1){
        prev = curr;
        curr = curr->next;
        m--;
        n--;
    }
    
    ListNode* rev_head = prev;
    ListNode* tail = curr;
    ListNode* nxt = NULL;
    
    while(n>0){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        n--;
    }
    
    if(rev_head!=NULL){
        rev_head->next = prev;
    }
    else{
        head = prev;
    }
    
    tail->next = curr;
    
    return head;
    
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int s=0;
    ListNode* head = A;
    while(head!=NULL){
        head= head->next;
        s++;
    }
    
    if(s==1){
        return NULL;
    }
    
    if(B>=s){
        return A->next;
    }
    head = A;
    int idx = s-B;
    for(int i=1;i<idx;i++){
        head = head->next;
    }
    
    head->next = head->next->next;
    
    return A;
}

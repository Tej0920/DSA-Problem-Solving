/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* head;
    
    if(A->val>B->val){
        head=B;
        B=B->next;
    }
    else{
        
        head=A;
        A=A->next;
    
    }
    ListNode* temp=head;
    while(A!=NULL && B!=NULL){
        if(A->val>B->val){
            temp->next = B;
            B = B->next;
        }
        else{
            temp->next = A;
            A = A->next;
        }
        temp = temp->next; 
    }
    
    if(A!=NULL){
        temp->next = A;
        
    }
    
    if(B!=NULL){
        temp->next = B;
    }
    
    
    return head;
}

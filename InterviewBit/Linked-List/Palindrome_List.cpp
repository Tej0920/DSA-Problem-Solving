/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* rev(ListNode* head){
     if(head==NULL || head->next==NULL){
         return head;
     }
     
     ListNode* prev = NULL;
     ListNode* curr = head;
     ListNode* nxt = NULL;
     
     while(curr!=NULL){
         nxt = curr->next;
         curr->next = prev;
         prev = curr;
         curr = nxt;
     }
     
     return prev;
     
 }
int Solution::lPalin(ListNode* A) {
    ListNode* slow = A;
    ListNode* fast = A;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    slow = rev(slow);
    fast = A;
    
    while(slow!=NULL){
        if(slow->val!=fast->val){
            return 0;
        }
        
        slow = slow->next;
        fast = fast->next;
    }
    
    return 1;
    
}


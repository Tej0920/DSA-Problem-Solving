/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* merge(ListNode* l1, ListNode* l2){
    ListNode* head = l1;
    while(l1!=NULL){
        ListNode* l1_next = l1->next;
        ListNode* l2_next = l2->next;
        
        l1->next = l2;
        
        if(l1_next==NULL){
            break;
        }
        
        l2->next = l1_next;
        l1 = l1_next;
        l2 = l2_next;
        
    }
    
    return head;
}

ListNode* reverse_list(ListNode* head){
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
ListNode* Solution::reorderList(ListNode* head) {
    if(head==NULL || head->next == NULL){
        return head;
    }
    
    ListNode* l1=head;//head of 1st part
    ListNode* slow = head;//head of 2nd part
    ListNode* prev = head;//end of 1st part
    ListNode* fast = head;//end of 2nd part
    
    while(fast!=NULL && fast->next!=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    prev->next = NULL;
    ListNode* l2 = reverse_list(slow);
    
    return merge(l1,l2);
    
}

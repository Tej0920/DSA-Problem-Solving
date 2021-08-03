/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* merge(ListNode* l1, ListNode* l2){
    ListNode* head = new ListNode(0);
    ListNode* current = head;
    
    while(l1!=NULL && l2!=NULL){
        if(l1->val<l2->val){
            current->next = l1;
            l1 = l1->next;
        }
        else{
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }
    
    if(l1!=NULL){
        current->next = l1;
        l1 = l1->next;
    }
    
    if(l2!=NULL){
        current->next = l2;
        l2 = l2->next;
    }
    
    return head->next;
    
}

ListNode* Solution::sortList(ListNode* head) {
    
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    ListNode* temp = head;
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(fast!=NULL || fast->next!=NULL){
        temp = slow;//last part of 1st list
        slow = slow->next;//starting of 2nd list
        fast = fast->next->next;//end of 2nd list
    }
    
    temp->next = NULL;
    ListNode* left_side = sortList(head);
    ListNode* right_side = sortList(slow);
    
    return merge(left_side,right_side);
    
    
    
}

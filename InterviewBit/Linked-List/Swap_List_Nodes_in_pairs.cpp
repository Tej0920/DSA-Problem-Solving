/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* head) {
    ListNode* prev = NULL, *curr = head, *nxt = head;
    
    int count = 0;
    if(head->next==NULL){
        return head;
    }
    while(count<2&&curr){
        nxt = nxt->next;
        curr->next = prev;
        prev = curr;
        curr=nxt;
        count++;
    }//reverse

    if(curr){
        
        head->next = swapPairs(curr);
    }
    
    return prev;
}

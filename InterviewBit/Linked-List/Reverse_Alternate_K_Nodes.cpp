/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* reverse(ListNode* &curr,int k){
    
    ListNode* nxt = NULL;
    ListNode* prev = NULL;
    while(curr&&k--){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr=nxt;
    }
    
    return prev;
}

void skipKNodes(ListNode* &curr, int k)
{
    while (curr && k--) {
        curr = curr->next;
    }
} 

ListNode* Solution::solve(ListNode* A, int B) {
    
    if(A==NULL){
        return A;
    }
    
    ListNode* original_head = A;
    ListNode* curr = A;
    
    A = reverse(curr,B);
    
    original_head->next = curr;
    skipKNodes(curr, B - 1);
    
    if(curr){
        curr->next = solve(curr->next,B);
    }
    
    return A;
}

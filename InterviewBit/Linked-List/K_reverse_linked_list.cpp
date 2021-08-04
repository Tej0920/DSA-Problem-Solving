/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* prev = NULL, *curr = A, *nxt = A;
    
    int count = 0;
    while(count<B&&curr){
        nxt = nxt->next;
        curr->next = prev;
        prev = curr;
        curr=nxt;
        count++;
    }//reverse
    
    if(curr){
        A->next = reverseList(curr,B);
    }
    
    return prev;
}

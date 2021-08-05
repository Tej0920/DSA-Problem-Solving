/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int size(ListNode* head){
    int count = 0;
    while(head){
        count++;
        head=head->next;
    }
    return count;
}
int Solution::solve(ListNode* head, int B) {
    int s = size(head);
    s = s/2;
    
     
        
    int diff = s-B;
    if(diff<0){
        return -1;
    }
    
    if(diff==0){
        return head->val;
    }
    for(int i=0;i<diff;i++){
        head=head->next;
    }

    return head->val;



}

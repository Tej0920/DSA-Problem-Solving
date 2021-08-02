/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* temp = A;
    int count0 = 0, count1 = 0;
    while(temp!=NULL){
        if(temp->val==0){
            count0++;
        }
        else{
            count1++;
        }
        temp = temp->next;
    }
    
    ListNode* curr = A;
    for(int i=0;i<count0;i++){
        curr->val = 0;
        curr = curr->next;
    }
    
    for(int i=0;i<count1;i++){
        curr->val = 1;
        curr = curr->next;
    }
    
    return A;
    
}

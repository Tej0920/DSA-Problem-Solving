/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* temphead = new ListNode(0);
    temphead->next = A;
    ListNode* temp = A;
    ListNode* prev = temphead;
    while(temp!=NULL){
        while(temp->next!=NULL && temp->val==temp->next->val){
            temp = temp->next;
        }
        if(prev->next==temp){
            prev = prev->next;
        }
        else{
            prev->next = temp->next;
        }
        temp = temp->next;
    }
    
    return temphead->next;
}

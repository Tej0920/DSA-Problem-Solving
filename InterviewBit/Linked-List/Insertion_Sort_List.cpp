/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
void sortedList(ListNode** head, ListNode *new_Node){
    ListNode* current;
    if((*head)==NULL||(*head)->val>=new_Node->val){//if it lowest in sorted list or 1st element
        (new_Node)->next = *head;
        (*head) = new_Node;
    }
    else{
        current = (*head);
        while(current->next!=NULL&&(current->next->val)<(new_Node)->val){
            current = current->next;
        }
        new_Node->next = current->next;
        current->next = new_Node;
    }
}
ListNode* Solution::insertionSortList(ListNode* head) {
    ListNode* sorted = NULL;
    ListNode* current = head;
    while(current!=NULL){
        ListNode* nxt = current->next;
        sortedList(&sorted, current);
        current = nxt;
    }
    
    return sorted;
}

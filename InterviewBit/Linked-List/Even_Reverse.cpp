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
    while(l2!=NULL){
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

ListNode* Solution::solve(ListNode* head) {
    ListNode* odd = new ListNode(0);
    ListNode* even = new ListNode(0);
    
    ListNode* l1 = odd, *l2 = even;
    ListNode* curr = head; 
    
    int i = 1;
    
    while(curr!=NULL){
        if(i%2!=0){
            l1->next = curr;
            l1 = l1->next;
        }else{
            l2->next = curr;
            l2 = l2->next;
        }
        curr=curr->next;
        i++;
    }
    l1->next = NULL;
    l2->next = NULL;
    ListNode* temp = even->next;
    
    
    
    even->next = reverse_list(even->next);
    odd = odd->next;
    even = even->next;
    /*while(odd!=NULL){
        cout << odd->val << " ";
        odd = odd->next;
    }
    
    while(even!=NULL){
        cout << even->val << " ";
        even = even->next;
    }*/
    
    return merge(odd,even);
    //return head;
    
}

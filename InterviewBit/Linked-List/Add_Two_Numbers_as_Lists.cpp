/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* ans = new ListNode(-1);
    
    int carry = 0;
    ListNode* output = ans;
    while(A||B){
        int sum=0;
        if(A){
            sum +=A->val;
        }
        if(B){
            sum +=B->val;
        }
        sum+=carry;
        carry = sum/10;
        output->next = new ListNode(sum%10);;
        if(A){
            A= A->next;
        }
        if(B){
            B = B->next;
        }
        output = output->next;
        
    }
    
    if(carry>0){
        ListNode* temp1 = new ListNode(carry);
        output->next = temp1;
    }
    
    return ans->next;
}

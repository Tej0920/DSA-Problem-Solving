int Solution::braces(string A) {
    int n = A.length();
    stack<char> stk;
    
    for(int i=0;i<n;i++){
        
        if(A[i]==')'){
            int count = 0;
            while(!stk.empty() && stk.top()!='('){
                stk.pop();
                count++;
            }
            if(count<=1){
                return 1;
            }// it will remove more than one elements 1 would be for (x) kind of case
            stk.pop();
        }
        else{
            stk.push(A[i]);
        }
    }
    
    return 0;
    
}

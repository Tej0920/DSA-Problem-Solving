int Solution::solve(string A) {
    int n = A.length();
    
    stack<char> stk;
    
    
    for(int i=0;i<n;i++){
        if(A[i]=='(' || A[i] == '[' || A[i] == '{'){
            stk.push(A[i]);
        }
        else if(A[i]==')'){
            if(stk.empty()){
                return 0;
            }
            else{
                if(stk.top()=='('){
                    stk.pop();   
                }
                else{
                    return 0;
                }
            } 
        }
        else if(A[i]=='}'){
            if(stk.empty()){
                return 0;
            }
            else{
                if(stk.top()=='{'){
                    stk.pop();   
                }
                else{
                    return 0;
                }
            } 
        }
        else if(A[i]==']'){
            if(stk.empty()){
                return 0;
            }
            else{
                if(stk.top()=='['){
                    stk.pop();   
                }
                else{
                    return 0;
                }
            } 
        }
    }
    
    if(stk.empty()){
        return 1;
    }
    
    return 0;
}

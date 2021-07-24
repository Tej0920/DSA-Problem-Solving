int Solution::solve(string A) {
    stack<int> stk;
    int n = A.size();
    int output = 0;
    
    for(int i=0;i<n;i++){
        if(A[i]=='('){
            stk.push(1);
        }
        else{
            if(!stk.empty()){
                stk.pop();
            }
            else{
                output++;
            }
        }
    }
    
    return output+stk.size();
}

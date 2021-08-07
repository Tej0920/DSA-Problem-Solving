int Solution::evalRPN(vector<string> &A) {
    int n = A.size();
    stack<int> stk;
    
    for(int i=0;i<n;i++){
        if(A[i]=="+" || A[i]=="-" || A[i]=="*" || A[i]=="/"){
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            int temp;
            if(A[i]=="+"){
                temp = a+b;
            }
            else if (A[i]=="-"){
                temp = a-b;
            }
            else if(A[i]=="*"){
                temp = a*b;
            }
            else{
                temp = a/b;
            }
            
            stk.push(temp);
        }
        else{
            stk.push(stoi(A[i]));
        }
    }
    
    return stk.top();
}

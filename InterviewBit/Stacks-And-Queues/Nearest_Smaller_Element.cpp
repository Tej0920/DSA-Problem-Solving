vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    stack<int> stk;
    vector<int> vec(n);
    
    for(int i = 0;i<n;i++){
        int temp = -1;
        while(!stk.empty() && stk.top()>=A[i]){
            stk.pop();
        }
        
        if(!stk.empty()){
            temp = stk.top();
        }
        
        vec[i] = temp;
        
        stk.push(A[i]);
    }
    
    return vec;
    
}

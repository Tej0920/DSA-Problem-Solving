int Solution::maxSpecialProduct(vector<int> &A) {
    stack<pair<long long int,long long int>> stk_left,stk_right;
    long long int n = A.size();
    vector<long long int> left(n), right(n);
    
    for(long long int i=0;i<n;i++){
        long long int temp = 0;
        while(!stk_left.empty()&& stk_left.top().first<=A[i]){
            stk_left.pop();
        }
        if(!stk_left.empty()){
            temp = stk_left.top().second;
        }
        left[i] = temp;
        stk_left.push({A[i],i});
    }
    
    for(long long int i=n-1;i>=0;i--){
        long long int temp = 0;
        while(!stk_right.empty()&& stk_right.top().first<=A[i]){
            stk_right.pop();
        }
        if(!stk_right.empty()){
            temp = stk_right.top().second;
        }
        right[i] = temp;
        stk_right.push({A[i],i});
    }
    
    long long int output = 0;
    for(long long int i=0;i<n;i++){
        output = max(output,left[i]*right[i]);
    }
    return output%1000000007;
    
}

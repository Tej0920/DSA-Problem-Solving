int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    stack<pair<int,int>> stk_left,stk_right;
    vector<int> left(n),right(n);
    
    for(int i = 0;i<n;i++){
        int temp = -1;
        while(!stk_left.empty() && stk_left.top().first>=A[i]){
            stk_left.pop();
        }
        
        if(!stk_left.empty()){
            temp = stk_left.top().second;
        }
        
        left[i] = temp;
        
        stk_left.push({A[i],i});
    }
    
    for(int i = n-1;i>=0;i--){
        int temp = n;
        while(!stk_right.empty() && stk_right.top().first>=A[i]){
            stk_right.pop();
        }
        
        if(!stk_right.empty()){
            temp = stk_right.top().second;
        }
        
        right[i] = temp;
        
        stk_right.push({A[i],i});
    }
    
    int output = INT_MIN;
    for(int i=0;i<n;i++{
        left[i]++;
        right[i]--;
        
        output = max(output,A[i]*(right[i]-left[i]+1));
    }
    
    
    return output;
}

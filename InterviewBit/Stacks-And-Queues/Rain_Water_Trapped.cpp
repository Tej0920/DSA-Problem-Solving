int Solution::trap(const vector<int> &A) {
    int n = A.size();
    
    vector<int> left(n),right(n);
    left[0] = A[0];
    right[n-1] = A[n-1];
    for(int i=1;i<n;i++){
        left[i] = max(A[i],left[i-1]);
    }
    
    for(int i=n-2;i>=0;i--){
        right[i] = max(A[i],right[i+1]);
    }
    
    int output = 0;
    for(int i=0;i<n;i++){
        int temp =min(left[i],right[i])-A[i];
        if(temp>0){
            output+=temp;
        }
    }
    
    return output;
}

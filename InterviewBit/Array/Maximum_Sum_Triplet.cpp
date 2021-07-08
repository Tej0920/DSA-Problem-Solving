int Solution::solve(vector<int> &A) {
    long int sum;
    long int max_sum = INT_MIN;
    int n = A.size();
    
    int right_max[n];
    
    
    
    for(int i = n-1;i>=0;i--){
        if(i==n-1){
            
            right_max[i] = A[i];
            
        }
        else{
            if(A[i]>right_max[i+1]){
                right_max[i] = A[i];
            }
            else{
                right_max[i] = right_max[i+1];
            }
            
        }
        
    }
    
    
    set<int> s;
    s.insert(INT_MIN);
    for(int i=0;i<n-1;i++){
        
        if(right_max[i+1]>A[i]){
            auto it = s.lower_bound(A[i]);
            --it;
            
            sum = *it + A[i] + right_max[i + 1];
            max_sum = max(max_sum,sum);
            s.insert(A[i]);
        }
        
    }
    return max_sum;
}

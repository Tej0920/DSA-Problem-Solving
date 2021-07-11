int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    if(n==1){
        return 0;
    }
    
    vector<int> mx(n,0);
    vector<int> mn(n,0);
     
    mx[0] = A[0];
    mn[n-1] = A[n-1];
    
    int mxx = A[0];
    int mnn = A[n-1];
    for(int i=1;i<n;i++){
        mxx = max(mxx,A[i-1]);
        
        mx[i] = mxx;
    }
    
    for(int i=n-2;i>=0;i--){
        mnn = min(mnn,A[i+1]);
         
        mn[i] = mnn;
    }
    
    for(int i=1;i<n-1;i++){
        if(A[i] > mx[i] && A[i]<mn[i]){
            
            return 1;
        }
    }
    
    return 0;
}

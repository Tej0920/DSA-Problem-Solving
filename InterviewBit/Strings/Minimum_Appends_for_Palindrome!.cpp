int Solution::solve(string A) {
    int i = 0,n = A.length();
    int j = n-1;
    int output = 0;
    while(i<=j){
        
        if(A[i]==A[j]){
            i++;
            j--;
        }
        
        else{
            i++;
            output+=(n-j);
            j=n-1;
        }
        
    }
    
    return output;
    
    
    
}

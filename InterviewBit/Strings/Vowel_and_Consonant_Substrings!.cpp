int Solution::solve(string A) {
    int vovel = 0;
    int n = A.length();
    
    for(int i = 0;i<n;i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            vovel++;
        }
    }//same like sum of humming distance
    
    return (vovel*(n-vovel))%1000000007;
}

int Solution::solve(string A) {
    int n = A.length();
    long long int output = 0;
    for(int i=0;i<n;i++){
        if( A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            output+=n-i;
        }
    }
    
    return output%10003;
}

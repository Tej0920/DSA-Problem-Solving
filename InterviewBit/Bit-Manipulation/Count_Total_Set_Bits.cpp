int Solution::solve(int A) {
    if(A==0){
        return 0;
    }
    
    long long int p = 0, output = 0;
    while(pow(2,p)<=A){
        p++;
    }
    
    p--;
    output+=p*pow(2,p)/2 + (A-pow(2,p)+1) + solve(A-pow(2,p));
    
    return output%1000000007;
    
}

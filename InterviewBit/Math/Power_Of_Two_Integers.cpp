int Solution::isPower(int A) {
    int p;
    for(int i=1;i<=sqrt(A);i++){
        p = log(A)/log(i);
        
        if(pow(i,p)==A)
            return 1;
    }
    return 0;
}

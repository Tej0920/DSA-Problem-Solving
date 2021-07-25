int Solution::lengthOfLastWord(const string A) {
    int output = 0,n = A.length();
    if(n==0){
        return 0;
    }
    for(int i=n-1;i>=0;i--){
        if(A[i]!=' '){
            output++;
        }
        else if(A[i]==' ' && (output!=0)){
            return output;
        }
    }
    
    return output;
}

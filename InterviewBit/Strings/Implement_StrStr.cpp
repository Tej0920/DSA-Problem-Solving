int Solution::strStr(const string A, const string B) {
    int m = A.length();
    int n = B.length();
    if(m==0||n==0||m<n){
        return -1;
    }
    
    for(int i=0;i<=m-n;i++){
        int j;
        for(j=0;j<n;j++){
            if(A[i+j]!=B[j]){
                break;
            }
        }
        if(j==n){
            return i;
        }
    }
    
    return -1;
}

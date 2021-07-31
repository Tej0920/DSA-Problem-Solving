int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int a=0,b=0,c=0;
    int output = INT_MAX;
    
    while(a<A.size()&&b<B.size()&&c<C.size()){
        output = min(output,max(abs(A[a]-B[b]),max(abs(B[b]-C[c]),abs(C[c]-A[a]))));
        if(A[a]<=B[b]&&A[a]<=C[c]){
            a++;
        }
        else if(B[b]<=A[a]&&B[b]<=C[c]){
            b++;
        }
        else if(C[c]<=B[b]&&C[c]<=A[a]){
            c++;
        }
    }
    
    return output;
}

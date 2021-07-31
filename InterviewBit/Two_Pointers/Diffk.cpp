int Solution::diffPossible(vector<int> &A, int B) {
    int n = A.size();
    int i = 0;
    int j = 1;
    
    while(j<n){
        if(i==j){
            j++;
        }
        if(A[j]-A[i]==B){
            return 1;
        }
        
        else if(A[j]-A[i]<B){
            j++;
        }
        
        else if(A[j]-A[i]>B){
            i++;
        }
    }
    
    return 0;
}

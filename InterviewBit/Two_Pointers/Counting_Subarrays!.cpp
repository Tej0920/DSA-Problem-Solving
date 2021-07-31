int Solution::solve(vector<int> &A, int B) {
    int i = 0, j =0, n = A.size();
    int sum = A[0];
    int output=0;
    while(i<n&&j<n){
        if(sum<B){
            j++;
            sum+=A[j];
            output+=max(j-i,0);
        }
        if(sum>=B){
            sum-=A[i];
            i++;
        }
    }
    
    return output;
}

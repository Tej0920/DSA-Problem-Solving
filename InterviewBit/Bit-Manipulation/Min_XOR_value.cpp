int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int output = INT_MAX;
    int msf = 0;//max so far
    for(int i=0;i<A.size()-1;i++){
        msf = A[i] ^ A[i+1];
        output = min(output,msf);
    }
    
    
    return output;
}

int Solution::singleNumber(const vector<int> &A) {
    int output = 0;
    
    for(int i=0;i<A.size();i++){
        output^=A[i];
    }
    
    return output;
}

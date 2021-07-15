vector<int> divide(vector<int> &A, int low, int high){
    
    vector<int> output(2,0);
    
    if(low==high){
        output[0] = output[1] = A[low];
        return output;
    }
    
    if(low+1 == high){
        output[0] = min(A[low],A[high]);
        output[1] = max(A[low],A[high]);
        return output;
    }
    
    int mid = low+(high-low)/2;
    vector<int> output_left = divide(A,low,mid-1);
    vector<int> output_right = divide(A,mid,high);
    output[0] = min(output_left[0],output_right[0]);
    output[1] = max(output_left[1],output_right[1]);
    return output;
    
    
}
int Solution::solve(vector<int> &A) {
    vector<int> output;
    output = divide(A,0,A.size()-1);
    return output[1]+output[0];
}

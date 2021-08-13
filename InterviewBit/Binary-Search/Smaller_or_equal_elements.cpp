int Solution::solve(vector<int> &A, int B) {
    int start = 0, end = A.size(),mid = 0;
    
    while(start<=end){
        mid = start + (end-start)/2;
        if(A[mid]<=B){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout << mid+(A[mid]<=B);
    return min((int)A.size(),mid+(A[mid]<=B));
}

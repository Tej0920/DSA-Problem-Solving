int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    if(B>A[n-1]){
        return n;
    }
    
    int start = 0;
    int end = n-1;
    int ans;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(A[mid]==B){
            return mid;
        }
        
        if(A[mid]>B){
            ans = mid;
            end = mid-1;
        }
        
        else{
            start = mid+1;
        }
    }
    
    return ans;
    
}

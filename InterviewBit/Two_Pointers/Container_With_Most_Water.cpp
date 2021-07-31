int Solution::maxArea(vector<int> &A) {
    int n = A.size();
    int i = 0, j = n-1;
    int output = 0;
    while(i<n){
        int temp = 0;
        if(A[i]<=A[j]){
            temp = (j-i)*(A[i]);
            i++;
        }
        else{
            temp = (j-i)*(A[j]);
            j--;
        }
        output = max(temp,output);
        if(i==j){
            break;
        }
    }
    
    return output;
}

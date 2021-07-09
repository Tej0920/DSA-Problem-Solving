vector<int> Solution::nextPermutation(vector<int> &A) {
    int s = A.size();
    //A = 1,3,5,4,2
    if(s == 1 || s == 0){
        return A;
    }
    int i = s-2;//i find to i = 1, which is A[i] = 3
    while(i>=0 && A[i]>=A[i+1])
        i--;
    if(i>=0){
        int j = s-1;
        while(A[j]<=A[i]){
            j--;
        }//j = 3 which is A[j] = 4
        swap(A[i],A[j]);
    }
    reverse(A.begin()+i+1,A.end());  
    return A;
}

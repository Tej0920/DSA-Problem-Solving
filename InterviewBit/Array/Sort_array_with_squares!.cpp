vector<int> Solution::solve(vector<int> &A) {
    
    int i = 0;
    int j = A.size()-1;
    int idx = j, val1, val2;
    vector<int> output(j+1,0);
    while(i<=j){
        val1 = A[i] * A[i];
        val2 = A[j] * A[j];
        if(val1>val2){
            output[idx--] = val1;
            i++;
        }
        else{
            output[idx--] = val2;
            j--;
        }
    }
    return output;
}

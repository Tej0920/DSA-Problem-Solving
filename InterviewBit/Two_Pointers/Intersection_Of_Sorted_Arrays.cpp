vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int i = 0,j=0;
    int n_a = A.size() , n_b = B.size();
    vector<int> output;
    while(i<n_a&&j<n_b){
        if(A[i]>B[j]){
            j++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else{
            output.push_back(A[i]);
            i++;
            j++;
        }
    }
    return output;
}

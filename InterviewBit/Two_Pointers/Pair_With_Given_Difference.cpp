int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> um;
    int n = A.size();
    
    for(int i=0;i<n;i++){
        if (um[A[i]])
            return 1;
        else
        {
            um[A[i] - B]++;
            um[A[i] + B]++;
        }
    }
    
    return 0;
}

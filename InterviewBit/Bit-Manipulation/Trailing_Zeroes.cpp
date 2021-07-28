int Solution::solve(int A) {
    if(A&1){
        return 0;
    }
    A = A^(A-1);
    cout << A << " ";
    return log2(A);
}

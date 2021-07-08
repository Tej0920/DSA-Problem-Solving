int Solution::maxSubArray(const vector<int> &A) {
    int meh = 0; // maximum ending here
    int msf = INT_MIN; // maximum so far
    for(int i = 0;i<A.size();i++){
        meh = meh + A[i];
        meh = max(meh,A[i]);
        msf = max(meh,msf);
    }
    return msf;
}

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> output;
    long long int n = A.size();
    long long int sum_v1 = 0, sum_v2 = 0;
    long long int sum1 = n*(n+1)/2;
    long long int sum2 = n*(n+1)*(2*n+1)/6;
    for(int i=0;i<n;i++){
        sum_v1 += (long long int)A[i];
        sum_v2 += (long long int)A[i]*(long long int)A[i];
    }
    long long int diff_mr = (sum1-sum_v1); // missing -repeating
    
    long long int sum_mr = (sum2-sum_v2)/diff_mr; // missing + repeating
    
    output.push_back((sum_mr-diff_mr)/2);//repeating
    output.push_back((sum_mr+diff_mr)/2);//missing
    
    
    return output;
    
    
}

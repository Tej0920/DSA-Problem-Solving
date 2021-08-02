void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    map<int,int> mp;
    int n = A.size();
    for(int i=0;i<n;i++){
        mp[A[i]]++;
    }
    int i = 0;
    for(int j =0;j<mp[0];j++){
        A[i++] = 0;
    }
    for(int j =0;j<mp[1];j++){
        A[i++] = 1;
    }
    for(int j =0;j<mp[2];j++){
        A[i++] = 2;
    }
    
}

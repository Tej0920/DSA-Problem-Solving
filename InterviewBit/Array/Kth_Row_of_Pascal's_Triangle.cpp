int bi_num(int n, int r){
    if(r==0 || r==n){
        return 1;
    }
    if(r>n-r){
        r = n-r;
    }
    int ans = 1;
    for(int i=0;i<r;i++){
        ans*=n-i;
        ans/=i+1;
    }
    return ans;
}

vector<int> Solution::getRow(int A) {
    vector<int> output;
    
    for(int i=0;i<=A;i++){
        output.push_back(bi_num(A,i));
    }
    
    return output;
}

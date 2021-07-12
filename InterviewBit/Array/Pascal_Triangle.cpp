int bi_num(int n,int r){
    if(r==0||r==n){
        return 1;
    }
    if(r>n-r){
        r = n-r;
    }
    int ans =1;
    for(int i=0;i<r;i++){
        ans*=n-i;
        ans/=i+1;
    }
    return ans;
}
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> output;
    
    for(int i=0;i<A;i++){
        vector<int> temp;
        for(int j=0;j<=i;j++){
            temp.push_back(bi_num(i,j));
        }
        output.push_back(temp);
    }
    
    return output;
}

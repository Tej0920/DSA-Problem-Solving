vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> output;
    int n = A.size();
    for(int i=0;i<n;i++){
        int k = i;
        vector<int> temp;
        for(int j=0;j<=i;j++){
            temp.push_back(A[j][k]);
            k--;
        }
        output.push_back(temp);
        temp.clear();
        
    }
    for(int i=1;i<n;i++){
        int k = i;
        
        vector<int> temp;
        for(int j=n-1;j>=i;j--){
            temp.push_back(A[k][j]);
            k++;
        }
        output.push_back(temp);
        temp.clear();
        
    }
    
    return output;
    
    
}

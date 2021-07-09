vector<int> Solution::findPerm(const string A, int B) {
    vector<int> output;
    int start = 1,end=0;
    int n = A.size();
    for(int i=0;i<n;i++){
        end++;
        if(A[i]=='I'){
            for(int j=end;j>=start;j--){
                output.push_back(j);
                
            }
            start = end + 1;
        }
        
    }
    end++;
    for(int i=end;i>=start;i--){
        output.push_back(i);
        
    }
    return output;
}

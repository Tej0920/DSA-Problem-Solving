string Solution::longestCommonPrefix(vector<string> &A) {
    int min_len = INT_MAX;
    int n = A.size();
    for(int i=0;i<n;i++){
        int temp = A[i].length();
        min_len = min(min_len,temp);
    }
    
    string output = "";
    char curr;
    
    for(int i=0;i<min_len;i++){
        curr = A[0][i];
        
        for(int j = 1;j<n;j++){
            if(curr!=A[j][i]){
                return output;
            }
        }
        output.push_back(curr);
    }
    
    return output;
}

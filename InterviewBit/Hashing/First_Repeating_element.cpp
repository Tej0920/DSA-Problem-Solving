int Solution::solve(vector<int> &A) {
    unordered_map<int,int> um;
    
    for(int i =0;i<A.size();i++){
        um[A[i]]++;
    }
    
    for(int i =0;i<A.size();i++){
        if(um[A[i]]>1){
            return A[i];
        }
    }
    
    return -1;
}

int Solution::diffPossible(const vector<int> &A, int B) {
    if(A.size()<2 || B<0){
        return 0;
    }
    
    unordered_set<int> um;
    
    for(int i=0;i<A.size();i++){
        int a = A[i] - B;// one for negative 
        int b = A[i] + B;// one for positive
        
        if(um.find(a)!=um.end() || um.find(b)!=um.end()){
            return 1;
        }
        
        um.insert(A[i]);
    }
    
    return 0;
}

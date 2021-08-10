int Solution::solve(vector<int> &A, int B) {
    int output = 0;
    
    unordered_map<int,int> um;
    
    for(int i=0;i<A.size();i++){
        int curr_xor = B^A[i];
        
        if(um.find(curr_xor)!=um.end()){
            output = output + um[curr_xor];
        }
        um[A[i]]++;
    }
//5, 4, 10, 15, 7, 6   
    return output;
}

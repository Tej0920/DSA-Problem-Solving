vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    unordered_map<int, set<int>> um;
    
    for(int i=0;i<A.size();i++){
        um[A[i]].insert(1);
    }
    for(int i=0;i<B.size();i++){
        um[B[i]].insert(2);
    }
    for(int i=0;i<C.size();i++){
        um[C[i]].insert(3);
    }
    
    vector<int> output;
    for(auto it:um){
        if(it.second.size()>=2){
            output.push_back(it.first);
        }
    }
    sort(output.begin(),output.end());
    return output;
    
}

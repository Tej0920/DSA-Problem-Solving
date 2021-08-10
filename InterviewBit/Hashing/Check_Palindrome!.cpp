int Solution::solve(string A) {
    int count = 0;
    unordered_map<char, int> um;
    
    for(int i=0;i<A.size();i++){
        um[A[i]]++;
    }
    
    set<pair<char,int>> s;
    
    for(int i=0;i<A.size();i++){
        s.insert({A[i],um[A[i]]});
    }
    
    /*for(auto &it:s){
        cout << it.first << " " << it.second << " ";
    }*/
    
    for(auto &it:s){
        int temp = it.second;
        if(temp%2!=0){
            count++;
        }
    }
    
    if(count<=1){
        return true;
    }
    
    return false;
    
}

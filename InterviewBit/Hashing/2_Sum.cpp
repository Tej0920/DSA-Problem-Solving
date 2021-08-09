vector<int> Solution::twoSum(const vector<int> &A, int B) {
    int n = A.size();
    vector<int> output;
    if(n<2){
        return vector<int> ();
    }
    
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int k = B - A[i];
        if(mp.find(k)!=mp.end()){
            
            output.push_back(mp[k]+1);
            output.push_back(i+1);
            return output;
        }
        if(mp.find(A[i]) == mp.end())
        {
            mp[A[i]] = i; // mp[A[0]] = 0 = mp[2] = 0
        }
            
        
    }
    return output;
    
     
}

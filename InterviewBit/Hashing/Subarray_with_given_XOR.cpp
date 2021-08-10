int Solution::solve(vector<int> &A, int B) {
    
    int n=A.size();
    map<int,int>mp;
    
    int x=0,output=0;
    mp.insert({0,1});
    
    if(B==0)
        output++;
    
    for(int i=0;i<n;i++)
    {
        x=(x^A[i]);
        
        auto it=mp.find(B^x);
        if(it!=mp.end())
        {
            output+=it->second;
        }
        mp[x]++;
    }
    
    return output;
}

vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int k = C;
    priority_queue<pair<int, pair<int,int>>> pq;
    
    set<pair<int,int>> S;
    int n = A.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    pq.push({A[n-1]+B[n-1],{n-1,n-1}});
    S.insert({n-1,n-1});
    
    vector<int> output;
    
    while(k--){
        pair<int, pair<int,int>> temp = pq.top();
        pq.pop();
        output.push_back(temp.first);
        int L = temp.second.first;
        int R = temp.second.second;
        
        if(L>=0 && R>0 && S.find({L,R-1})==S.end()){
            pq.push({A[L]+B[R-1],{L,R-1}});
            S.insert({L,R-1});
        }
        if(L>0 && R>=0 && S.find({L-1,R})==S.end()){
            pq.push({A[L-1]+B[R],{L-1,R}});
            S.insert({L-1,R});
        }
    }
    
    return output;
    
    
    
}

vector<int> Solution::solve(vector<vector<int> > &A) {
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;//sort first
    
    int n = A.size();
    for(int i=0;i<n;i++){
        pq.push({A[i][0],{0,i}});
    }
    
    vector<int> output;
    while(!pq.empty()){
        output.push_back(pq.top().first);
        int L = pq.top().second.first;
        int R = pq.top().second.second;
        pq.pop();
        if(L<A[R].size()-1){
            L++;
            pq.push({A[R][L],{L,R}});
        }
    }
    
    return output;
}

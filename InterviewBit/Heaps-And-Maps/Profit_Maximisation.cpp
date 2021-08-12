int Solution::solve(vector<int> &A, int B) {
    int output = 0,n = A.size();
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(A[i]);
    }
    
    while(B--){
        int a = pq.top();
        pq.pop();
        output+=a;
        pq.push(a-1);
    }
    
    return output;
        
}

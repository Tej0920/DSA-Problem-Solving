int Solution::nchoc(int A, vector<int> &B) {
    long long int output=0;
    priority_queue<int> pq;
    
    for(int i=0;i<B.size();i++){
        pq.push(B[i]);
    }
    
    while(A--){
        int n = pq.top();
        output = (output + n) % 1000000007;
        pq.pop();
        pq.push(n/2);
    }
    
    return output;
}

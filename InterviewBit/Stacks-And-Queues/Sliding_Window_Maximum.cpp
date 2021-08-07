vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    deque<int> dq;
    int n = A.size();
    
    vector<int> output;
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front()==(i-B)) dq.pop_front();
        
        
        while(!dq.empty() &&  A[i] > A[dq.back()]) dq.pop_back();
        
        dq.push_back(i);
        if((i+1)>=B){
            output.push_back(A[dq.front()]);
        }
    }
    
    return output;
//1, 3, -1, -3, 5, 3, 6, 7 
}

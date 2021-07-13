int Solution::maximumGap(const vector<int> &A) {
    if(A.size() < 2){
        return 0;
    }
    
    int n = A.size();
    vector<int> forMin(n, -1);
    vector<int> forMax(n, -1);
    
    int max_dist = 0, mini = INT_MAX, maxi = INT_MIN;
    int gap = 0, bucket = 0, ind = 0;
    
    for(int i = 0; i < n; i++){
        if(A[i] < mini){
            mini = A[i];
        }
        if(A[i] > maxi){
            maxi = A[i];
        }
    }
    
    gap = maxi - mini;
    gap = gap/(n-1);
    
    if(gap == 0){
        return maxi - mini;
    }
    
    for(int i = 0; i < n; i++){
        bucket = (int)((A[i] - mini)/gap);
        if(forMin[bucket] < 0){
            forMin[bucket] = A[i];
            forMax[bucket] = A[i];
        }
        else{
            forMin[bucket] = min(A[i], forMin[bucket]);
            forMax[bucket] = max(A[i], forMax[bucket]);
        }
    }
    
    int output = 0;
    
    for(int i = 0; i < forMin.size(); i++){
        if(forMin[i] >= 0){
            output = max(output, forMin[i]-forMax[ind]);
            ind = i;
        }    
    }
    
    return output;
    
}

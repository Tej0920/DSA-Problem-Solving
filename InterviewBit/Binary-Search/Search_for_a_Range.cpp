vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int start = 0,end=A.size()-1,mid;
    vector<int> vec(2,-1);
    
    while(start<=end){
        mid = start + (end-start)/2;
        if(A[mid]==B){
            vec[0] = mid;
            end = mid-1;    
        }
        else if(A[mid]<B){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        
    }
    
    if(vec[0]==-1){
        return vec;
    }
    start = vec[0];
    end = A.size()-1;
    
    while(start<=end){
        mid = start + (end-start)/2;
        if(A[mid]==B){
            vec[1] = mid;
            start = mid+1;
        }
        else if(A[mid]<B){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        
    }
    
    
    return vec;
}

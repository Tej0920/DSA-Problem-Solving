int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size();
    if(n==0){
        return 0;
    }
    
    int m = A[0].size();
    if(A[n-1][m-1]<B){
        return 0;
    }
    
    if(A[0][0]>B){
        return 0;
    }
    
    int low = 0, high = n;
    while(low<high){
        int row = low + (high-low)/2;
        if(A[row][0]<=B && B<=A[row][m-1]){
            int l=0, h = m;
            while(l<h){
                int mid = l + (h-l)/2;
                if(A[row][mid] == B){
                    return 1;
                }
                if(A[row][mid]>B){
                    h = mid;
                }
                else{
                    l = mid+1;
                }
            }
        }
        
        if(A[row][0]>B){
            high = row;
        }
        else{
            low = row+1;
        }
        
    }
    
    return 0;
    
}

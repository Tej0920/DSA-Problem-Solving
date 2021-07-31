int Solution::nTriang(vector<int> &A) {
    /*int n = A.size();
    
    if(n<3){
        return 0;
    }
    sort(A.begin(),A.end());
    
    long long int count = 0;
    int i = 0;
    int j = i+1;
    while(i<n-2)
    {
        int k = j+1;
        while(k<n && A[k] < A[i] + A[j])
            k++;
        count = (count +  (long long int)(k-j-1))%1000000007;
        j++;
        // If j has reached the end. then reset both i & j.
        if(j>=n)
        {
            i++;
            j = i+1;
        }
    }
    return count%1000000007;*/
    
    int i,j,k,n = A.size(),cnt=0;
    sort(A.begin(),A.end());
    if(n<3) return 0;
    for(i = 0;i<n-2;i++){
        k = i+2;
        for(j=i+1;j<n-1;j++){
            while(k<n && A[i] + A[j] > A[k]) k++;
            if(k>j) cnt += k-j-1;
            cnt = cnt%1000000007;
        }
    }
    return cnt;
    
}

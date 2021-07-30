vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int n = A.size(), end,start;
    long long int sum;
    sort(A.begin(),A.end());
    vector<vector<int>> output;
    
    for(int i=0;i<n-2;i++){
        start = i+1;
        end = n-1;
        
        while(start<end){
            sum=(long long int)A[i]+(long long int)A[start]+(long long int)A[end];
            if(sum==0){
                output.push_back({A[i],A[start],A[end]});
                start++;
                end--;
            }
            else if(sum>0){
                end--;
            }
            else{
                start++;
            }
        }
        
        
    }
    sort(output.begin(),output.end());
    output.erase(unique(output.begin(),output.end()),output.end());
    return output;
}

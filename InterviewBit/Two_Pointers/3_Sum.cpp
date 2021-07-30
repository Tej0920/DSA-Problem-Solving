int Solution::threeSumClosest(vector<int> &A, int target) {
    sort(A.begin(),A.end());
    
    int n = A.size(), left,right,diff=INT_MAX;
    long long int sum, output = (long long int)target;
    
    for(int i=0;i<n-2;i++){
        left = i+1;
        right = n-1;
        
        while(left<right){
            sum=A[i]+A[left]+A[right];
            if(abs(target-sum)<diff){
                diff = abs(target-sum);
                output = sum;
            }
            if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        
        
    }
    
    return output;
}

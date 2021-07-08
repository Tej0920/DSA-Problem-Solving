int Solution::solve(int A, vector<int> &B) {
    int output = 0;
    
    long long int sum = 0;
    for(int i=0;i<B.size();i++){
        sum += B[i];
    }
    
    if(sum%3==0){
        int count = 0;
        long long int sum_13 = sum / 3;
        long long int sum_23 = 2*sum_13;
        sum = 0;
        for(int i = 0;i<B.size()-1;i++){
            sum += B[i];
            if(sum == sum_23){
                output += count;
            }
            if(sum == sum_13){
                count++;
            }
        }
    }
    
    
    return output;
    
}

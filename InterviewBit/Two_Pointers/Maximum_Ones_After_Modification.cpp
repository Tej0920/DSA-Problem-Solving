int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    if(n==0){
        return 0;
    }
    int i = 0, j =0, count = 0;
    int output = INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            count++;
        }
        while(count>B){
            if(A[j]==0){
                count--;
            }
            j++;//find atmost 0's
        }
        
        if(output<i-j+1){
            output = i-j+1;
            //cout << i << " " << j << " " << output << endl;
            
        }
    }
    
    return output;
}

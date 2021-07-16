int Solution::solve(int A, int B, int C) {
    int output = (A+C-1)%B;
    if(output==0){
        return B;
    }
    return output;
    
}

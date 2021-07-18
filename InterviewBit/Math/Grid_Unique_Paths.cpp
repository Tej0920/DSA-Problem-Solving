int Solution::uniquePaths(int A, int B) {
    int n = A+B-2;// there are A-1 ways to move right and B-1 to move downwards
    int r = A-1; // from A+B-2 we need to select nCr 
    double output = 1;
    
    for(int i = 1;i<=r;i++){
        output = output*(n-r+i)/(i);
        
    }
    return (int)output;
}

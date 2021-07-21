int Solution::trailingZeroes(int A) {
    int output=0;
    int n = 5;
    while((A/n)>0){
        output+=A/n;
        n*=5;
    }
    return output;
}

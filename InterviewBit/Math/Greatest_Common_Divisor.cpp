int Solution::gcd(int A, int B) {
    int output=1;
    if(A==0||B==0){
        return max(A,B);
    }
    for(int i=1;i<=min(A,B);i++){
        if(A%i==0&&B%i==0){
            output = i;
        }
    }
    return output;
}

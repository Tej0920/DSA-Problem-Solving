int Solution::divide(int A, int B) {
    long long x = A, y = B;
    int sign = 1;
    if(((x<0)&&(y>0))||((x>0)&&(y<0))){
        sign = -1;
    }
    
    if(x<0){
        x=-x;
    }
    
    if(y<0){
        y=-y;
    }
    
    long long int output = 0;
    long long int temp = 0;
    
    for(int i = 31;i>=0;i--){
        if(temp+(y<<i)<=x){
            temp += y<<i;
            output+=1ll<<i;//for long long
        }
    }
    
    if(sign==-1){
        output = -output;
    }
    
    if(output>INT_MAX||output<INT_MIN){
        return INT_MAX;
    }
    
    return output;
    
}

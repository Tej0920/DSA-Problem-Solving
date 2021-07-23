int Solution::atoi(const string A) {
    long int output = 0;
    int i = 0;
    int sign = 1;
    if(A[i]=='-'){
        sign = -1;
        i++;
    }
    
    if(A[i]=='+'){
        i++;
    }
    
    for(;i<A.size();i++){
        
        if(A[i]>='0' and A[i]<='9'){
            output = output*10+(A[i]-'0');
            if(output*sign<INT_MIN || output*sign>INT_MAX)
                break;
        }
        else{
            break;
        }
    }
    
    output = output*sign;
    if(output<INT_MIN || output>INT_MAX){
        if(output<0)
            return INT_MIN;
        return INT_MAX;
    }
    return output;
}

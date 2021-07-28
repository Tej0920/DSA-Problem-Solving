int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int output = 0;
    int mask = 1;
    for(int i = 0 ;i<32;i++){
        if((A&mask)!=0){
            output++;
        }
        mask = mask<<1;//left shift, 1, 10(2), 100(4), 10000(8),.....
            
    }
    
    return output;
}

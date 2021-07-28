unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned long int output=0;
    int con = 31;
    while(A!=0){
        output+=pow(2,con)*(A%2);
        con--;
        A/=2;
    }
    
    return output;
}

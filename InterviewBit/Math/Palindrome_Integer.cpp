int Solution::isPalindrome(int A) {
    int output = 0, temp = A;
    while(A>0){
        if(output/10 >= INT_MAX/10){
            return 0;
        }
        output = A%10 + output*10;
        A/=10;
    }
    
    return output==temp;
}

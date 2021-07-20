string Solution::convertToTitle(int A) {
    string output = "";
    while(A>0){
        int temp = A%26;
        if(temp==0){
            output = 'Z' + output;
            A = (A/26) - 1;
        }
        else{
            output = char('A' + (temp-1)) + output;
            A/=26;
        }
    }
    return output;
}

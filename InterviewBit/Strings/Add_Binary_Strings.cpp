string Solution::addBinary(string A, string B) {
    int i = A.length()-1;
    int j = B.length()-1;
    
    string output="";
    int carry = 0; 
    while(i>=0||j>=0){
        int sum = carry;
        if(i>=0){
            sum+=(A[i--]-'0');
        }
        if(j>=0){
            sum+=(B[j--]-'0');
        }
        carry = (sum>1)?1:0;
        output += to_string(sum%2);
    }
    if(carry){
        output+=to_string(carry);
    }
    
    reverse(output.begin(),output.end());
    return output;
    
}

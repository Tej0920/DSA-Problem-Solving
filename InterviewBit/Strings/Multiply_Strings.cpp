string Solution::multiply(string A, string B) {
    string output = "";
    int a = A.length(), b = B.length();
    vector<int> vec(a+b);
    
    for(int i=a-1;i>=0;i--){
        for(int j=b-1;j>=0;j--){
            int mul = (A[i]-'0')*(B[j]-'0');
            int sum = vec[i+j+1]+mul;
            vec[i+j] += sum/10;//carry
            vec[i+j+1] = sum%10;//single digit
        }
    }
    int flag = 1;
    for(int i=0;i<a+b;i++){
        if(flag){
            if(vec[i]==0){
                continue;    
            }
            else{
                output = to_string(vec[i]);
                flag = 0;
            }
        }
        else{
            output+=to_string(vec[i]);
        }
        
    }
    if(output.length()==0){
        return "0";
    }
    return output;
    
}

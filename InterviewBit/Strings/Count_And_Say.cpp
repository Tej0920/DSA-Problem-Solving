string Solution::countAndSay(int n) {
    if(n==1){
        return "1";
    }
    if(n==2){
        return "11";
    }
    
    string output = "11";
    
    for(int i=3;i<=n;i++){
        string temp = "";
        output +='$';
        int count = 1;
        
        for(int j = 1;j<output.length();j++){
            if(output[j]==output[j-1]){
                count++;
            }
            else{
                temp = temp + to_string(count) + output[j-1];
                count =1;
            }
        }
        output = temp;
        
    }
    
    return output;
    
}

string Solution::solve(string A) {
    
    string s1=A;
    int len= A.length();
    string s2(len,'9');
    
    if(A==s2){
        string s3(len-1,'0');
        string s2="1"+s3+"1";
        return s2;
    }// if there are 999 kind of string then put 1001 
    
    for(int i=len-1;i>=(len-1)/2;i--){
        s1[i]=s1[len-1-i];
    }
    
    int idx = (len-1)/2;
    
    
    while(s1<=A){
        if(s1[idx]!='9'){
            s1[idx]++;
            s1[len-1-idx]=s1[idx];
        }
        else{
            s1[idx]='0';
            s1[len-1-idx]=s1[idx];
            
            idx--;
        }
    }
    return s1;
        
    
}

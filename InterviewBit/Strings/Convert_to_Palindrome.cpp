bool palindromeCheck(string str){
    string copy_str = str;
    
    reverse(str.begin(),str.end());
    
    if(copy_str==str){
        return 1;
    }
    
    return 0;
}
int Solution::solve(string A) {
    int n = A.length();
    int start = 0;
    int end = n-1;
    
    while(start<end){
        if(A[start]==A[end]){
            start++;
            end--;
        }
        else{
            string p = A.substr(0,start) + A.substr(start+1,A.length()-start-1);
            string q = A.substr(0,end) + A.substr(end+1,A.length()-end-1);
            
            return palindromeCheck(p) || palindromeCheck(q);
        }
    }
    
    return 1;
}

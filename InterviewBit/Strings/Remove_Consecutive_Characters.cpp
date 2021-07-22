string Solution::solve(string A, int B) {
    int start = 0, end = 0, n = A.length();
    string output = "";
    while(start<n){
        end = start ;
        while((A[end]==A[end+1]) && end<n){
            end++;
        }
        
        if(end-start+1!=B){
            output += A.substr(start,end-start+1);
        }
        start = end+1;
    }
    
    return output;
}

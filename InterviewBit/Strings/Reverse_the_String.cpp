string Solution::solve(string A) {
    string output = "";
    
    if(A.length()==0){
        return output;
    }
    int i = 0;
    int n = A.size();
    while(i<n){
        while(i<n && A[i]==' '){
            i++;
        }
        if(i>=n){
            break;
        }
        
        int j = i+1;//remove extra space so i will be start of word and j will be end of the word
        while(j<n && A[j]!=' '){
            j++;
        }
        
        string temp = A.substr(i,j-i);
        if(output.length()==0){
            output+=temp;
        }else{
            output = temp + " " + output;
        }
        
        i = j+1;
    }
    
    return output;
}

string Solution::solve(string str) {
    int n = str.size(),i,j;
    for(i=n-2;i>=0;i--){
        if(str[i]<str[i+1]){
            break;
        }
    }
    if(i==-1){
        return "-1";
    }
    else{
        for(j=n-1;j>i;j--){
            if(str[j]>str[i]){
                break;
            }
            
        }
        swap(str[i],str[j]);
        reverse(str.begin()+i+1,str.end());
    }
    
    
    return str;
}

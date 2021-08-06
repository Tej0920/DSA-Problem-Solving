string Solution::simplifyPath(string A) {
    string output = "";
    
    vector<string> vec;
    
    for(int i=0;i<A.length();i++){
        string temp = "";
        
        while(i<A.length()&&A[i]!='/'){
            temp+=A[i];
            i++;
        }
        
        if(temp==""||temp=="."){
            continue;
        }
        else if(temp==".."){
            if(vec.size()>0){
                vec.pop_back();
            }
        }
        else{
            vec.push_back(temp);
        }
    }
    
    if(vec.size()==0){
        return "/";
    }
    for(int i=0;i<vec.size();i++){
        output+="/" + vec[i];
    }
    return output;
    
}

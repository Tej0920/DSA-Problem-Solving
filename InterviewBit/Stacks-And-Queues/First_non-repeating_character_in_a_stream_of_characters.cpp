string Solution::solve(string A) {
    string output = "";
    queue<char> q;
    int n = A.length();
    vector<int> vec(26,0);
    
    for(int i=0;i<n;i++){
        q.push(A[i]);
        vec[A[i]-'a']++;
        while(!q.empty() and vec[q.front()-'a']>1){
            q.pop();
        }
        if(!q.empty()){
            output+=q.front();
        }
        else{
            output+="#";
        }
    }
    
    return output;
}

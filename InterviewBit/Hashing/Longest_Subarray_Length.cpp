int Solution::solve(vector<int> &A) {
    int mx = 0;
    int count=0;
    unordered_map<int,int> um;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            count--;
        }
        else{
            count++;
        }
        if(count==1){
            mx = i+1;
        }
        else if(um.find(count)==um.end()){
            um[count] = i;
        }
        if(um.find(count-1)!=um.end()){
            mx = max(mx,i-um[count-1]);
        }
    }
    
    
    return mx;
}

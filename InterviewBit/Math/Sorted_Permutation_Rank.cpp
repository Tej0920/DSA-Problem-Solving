void calculatefactorial(vector<int>& fact,int n){
    fact[0] = 1;
    fact[1] = 1;
    for(int i=2;i<n;i++){
        fact[i] = i*fact[i-1]%1000003;
    }
}

int Solution::findRank(string str) {
    string s = str;
    int n = str.length();
    
    sort(s.begin(),s.end());
    
    vector<int> fact(n);
    vector<int> check(n,1);
    calculatefactorial(fact,n);
    
    int idx = 0;
    long long int output = 0;
    for(int i = 0;i<n;i++){
        if(check[i]==-1){
            continue;
        }
        else if(str[idx]!=s[i]){
            
            output +=fact[n-idx-1];
        }
        else{
            check[i]=-1;
            idx++;
            i=-1;
        }
    }
    
    return (output+1)%1000003;
}

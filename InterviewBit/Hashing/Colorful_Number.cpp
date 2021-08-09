int Solution::colorful(int A) {
    string str = to_string(A);
    int n = str.length();
    map<long long int, bool> mp;
    long long int mul = 1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            mul *= (long long )(str[j]-'0');
            if(mp[mul]==true){
                return 0;
            }
            mp[mul] = true;
        }
    }
    
    return 1;
}

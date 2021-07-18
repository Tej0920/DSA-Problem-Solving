#define ll long long
#define mod 1000000007
ll power(ll x,ll y){
    ll res=1; 
    while(y){
        if(y&1) res = (res*x)%mod; 
        y>>=1; 
        x = (x*x)%mod;
    }
    return res;
}


int Solution::solve(int A, vector<int> &B) {
    sort(B.begin(),B.end()); 
    vector<int>un_vis; 
    int i=1;
    un_vis.push_back(B[0]-1);
    for(;i<B.size();i++){
        un_vis.push_back(B[i]-B[i-1]-1);
    }
    un_vis.push_back(A-B[i-1]);
    int n = un_vis.size(); 
    ll fact[100000]={1}; 
    for(ll f=1;f<100000;f++) fact[f] = (f*fact[f-1])%mod;
    ll ans = 1,x=A-B.size(),p=1;
    for(i=0;i<n;i++){
        if(!un_vis[i]) continue;
        if(i!=0&&i!=n-1) ans = (ans*power(2,un_vis[i]-1))%mod;
        p = (p*fact[un_vis[i]])%mod;
    }
    ans = (ans*fact[x])%mod;
    ans = (ans*power(p,mod-2))%mod;
    return ans;
    
    
}

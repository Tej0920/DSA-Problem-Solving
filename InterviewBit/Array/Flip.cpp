vector<int> Solution::flip(string A) {
    vector<int> output;
    int count1=0,n=A.length();
    for(int i=0;i<n;i++){
        if(A[i]=='1'){
            count1++;
        }else{
            break;
        }
    }
    if(count1==n){
        return output;
    }
    int left = 1, right =1;
    int diff = 0, diff_till_now = 0;
    int L,R;
    for(int i=0;i<n;i++){
        if(A[i]=='0'){
            diff++;
        }
        else{
            diff--;
        }
        if(diff>diff_till_now){
            diff_till_now = diff;
            L = left;
            R = right;
        }
        if(diff<0){
            diff = 0;
            left = i+2;
        }
        right++;
    }
    output.push_back(L);
    output.push_back(R);
    
    return output;
    
}

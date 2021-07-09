int func(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    
    return ab.compare(ba)>0?1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    string output = "";
    vector<string> vec;
    int count0 = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            count0++;
        }
        vec.push_back(to_string(A[i]));
    }
    if(count0==A.size()){
        return "0";
    }
    sort(vec.begin(),vec.end(),func);
    for(int i=0;i<vec.size();i++){
        output += vec[i];
    }
    
    return output;
}

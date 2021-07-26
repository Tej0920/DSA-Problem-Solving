string mulby2(string s){
    int n = s.size();
    int carry = 0;
    int temp;
    for(int i=n-1;i>=0;i--){
        temp = ((s[i] - '0')*2);
        s[i] = '0'+((temp+carry)%10);//converting it into char
        carry = (temp+carry)/10;
    }
    if(carry)
        s.insert (0, 1, carry+'0');//add carry at 0th position which is to be repeated 1 times
    return s;
}
int Solution::power(string A) {
    string s = "1";
    while(true){
        s = mulby2(s);
        //cout << s << " ";
        
        if(A==s)
            return 1;
        if(s.size()>A.size())
            return 0;
    }//s will be 2, 4, 8, if s.size()>A.size() which means not found for that length 
}

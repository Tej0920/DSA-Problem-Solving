int Solution::titleToNumber(string str) {
    int output = 0;
    for(int i =0;i<str.size();i++){
        output*=26;
        output+=str[i]-'A'+1;
    }
    return output;
}

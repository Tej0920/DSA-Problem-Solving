int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int s1 = A.size();
    int s2 = B.size();
    
    if(s1!=s2)
        return 0;
    int x_d, y_d;
    int output = 0;
    for(int i=0;i<s1-1;i++){
        x_d = abs(A[i+1]-A[i]);
        y_d = abs(B[i+1]-B[i]);
        
        output += max(x_d,y_d);
        
    }
    return output;
}

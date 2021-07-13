int Solution::solve(vector<string> &A) {
    vector <double> arr;
    
    for (auto s:A)
        arr.push_back (stod (s));

    double a = arr[0], b = arr[1], c = arr[2];
    
    for (int i = 3; i < A.size ()+1; i++) {
        double sum = a+b+c;
        
        if (sum>1 && sum<2)
            return 1;
        
        if (i>=A.size())
            break;
        
        double x = arr[i];
        
        if (sum>2) {
            double m = max(a, max(b,c));
            if (m==a) a=x; else if (m==b) b=x; else if (m==c) c=x;
        } else if (sum<=1) {
            double m = min(a, min(b,c));
            if (m==a) a=x; else if (m==b) b=x; else if (m==c) c=x;
        }
    }
    return 0;
}

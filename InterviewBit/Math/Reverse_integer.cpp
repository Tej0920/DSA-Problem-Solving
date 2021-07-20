int Solution::reverse(int x) {
    int rem;     
    long long rev = 0;
    while(x != 0)
    {
        rem = x % 10;
        x = x /10;
        rev =  rev * 10 + rem;
        if(rev  > INT_MAX)
            return 0;
        if(rev < INT_MIN)
            return 0;
        
    }
    return rev;
    
}

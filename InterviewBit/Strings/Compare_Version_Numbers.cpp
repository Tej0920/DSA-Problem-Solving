int Solution::compareVersion(string A, string B) {
    unsigned long long int numberOne = 0;
    unsigned long long int numberTwo = 0;
    
    int i = 0;
    int j = 0;
    
    while(i < A.size() || j < B.size()) {
        while(i < A.size() && A[i] != '.') {
            numberOne = numberOne * 10 + (A[i] - '0');
            i++;
        }
        
        
        
         while(j < B.size() && B[j] != '.') {
            numberTwo = numberTwo * 10 + (B[j] - '0');
            j++;
        }
        
        if(numberOne < numberTwo) return -1;
        if(numberOne > numberTwo) return 1;
        
        numberOne = 0;
        numberTwo = 0;
        
        i++;
        j++;            
    }
    
    return 0;
}

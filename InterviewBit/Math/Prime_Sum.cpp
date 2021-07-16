bool isPrime(int n){
    if(n<=1){
        return false;
    }
    
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    
    return true;
    
}

vector<int> Solution::primesum(int A) {
    vector<int> output;
    
    for(int i=0;i<A;i++){
        
        if(isPrime(i)&&isPrime(A-i)){
            output.push_back(i);
            output.push_back(A-i);
            
            return output;
        }
    }
    return output;
}

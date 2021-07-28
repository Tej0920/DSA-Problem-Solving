int Solution::singleNumber(const vector<int> &A) {
    
    int output = 0;
    
    for(int i=0;i<32;i++){
        int count = 0;
        for(int j=0;j<A.size();j++){
            if(A[j]&(1<<i)){//check AND gate for that bit
                count++;
            }
        }
        if(count%3!=0){
            output|=(1<<i);//OR gate add 000010 ma 001010 1 add thay
        }
    }
    
    return output;
}

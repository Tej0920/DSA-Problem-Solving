int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int count0 = 0, count1 = 0, ele0 = INT_MAX, ele1 = INT_MAX;
    for(int i=0;i<n;i++){
        if(ele0==A[i])
            count0++;
        else if(ele1==A[i])
            count1++;
        else if(count0==0){
            count0++;
            ele0 = A[i];
        }
        else if(count1==0){
            count1++;
            ele1 = A[i];
        }
        else{
            count0--;
            count1--;
        }
    }// taking ele0 and ele1 can have max number of repetation
    count0 = 0;
    count1 = 0;
    
    for(int i=0;i<n;i++){
        if(ele0==A[i]) 
            count0++;
        else if(ele1==A[i])
            count1++;
    }//count the particular those elements 
    
    if(count0>n/3)
        return ele0;
    if(count1>n/3)
        return ele1;
    
    return -1;
    
    
}

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    if(B>=n)
        return 1;
    int left = 0;
    int index = 0;
    int output = 0;
    while(index<n){
        int flag = 0;
        for(int i = index + B - 1;i>=left;i--){ //left holds left most of index [X-B+1] and i start with right most part and then decrement it to leftmost
            if(A[i] == 1){ // if 1 found in right most part or not
                left = i + 1; // if found then update temp for left most index for next iteration
                flag = 1; // 1 found
                output++; // update output
                index = i + B;
                break;
            }
        }//ends for loop
        if(index >= n)
            return output; // if index the current position value increased more than size of A then return the output
        if(flag == 0)
            return -1; // no 1 found in right most 
    }
    
    return output;
}

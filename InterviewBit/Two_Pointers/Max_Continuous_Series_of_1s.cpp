vector<int> Solution::maxone(vector<int> &A, int B) {
    int len = A.size(), st = 0, en = 0, i, j, zeroCount = 0;

    for(i=0, j=0; j<len;) {
        if (zeroCount <= B)
            if (not A[j++])     zeroCount ++; 
        if (zeroCount > B)
            if (not A[i++])     zeroCount --;
        if(en - st < j - i)
            st = i, en = j;
    }
    
    vector<int> vec;
    while(st < en)  vec.push_back(st ++);
    return vec;
}

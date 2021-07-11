vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> output(A,vector<int> (A));
    int num =1;
    int top=0,left=0,right=A-1,bottom=A-1;
    
    while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++)
            output[top][i] = num++;
        top++;
        for(int i=top;i<=bottom;i++)
            output[i][right] = num++;
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--)
                output[bottom][i] = num++;
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--)
                output[i][left] = num++;
            left++;
        }
        
    }
    
    return output;
}

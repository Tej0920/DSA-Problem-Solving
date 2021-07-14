void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size(), m = A[0].size();// n = row size , m = column size
    
    int first_row = 0, first_column = 0;
    
    for(int i=0;i<n;i++){
        if(A[i][0]==0){
            first_column = 1;
        }
    }
    
    for(int i=0;i<m;i++){
        if(A[0][i]==0){
            first_row = 1;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] == 0){
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }// marking 1st row as 0 to mark column number and same for column. 
    
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(A[i][0]==0 || A[0][j] == 0){
                A[i][j] = 0 ;
            }
        }
    }
    
    if(first_row){
        for(int i=0;i<m;i++){
            A[0][i] = 0;
        }
    }//we have to do it seperately as it is not considered for int i=1 loop
    
    
    if(first_column){
        for(int i=0;i<n;i++){
            A[i][0] = 0;
        }
    }
    
    
    
}

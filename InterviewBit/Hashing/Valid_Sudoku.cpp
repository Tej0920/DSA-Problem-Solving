int Solution::isValidSudoku(const vector<string> &A) {
    
    
    unordered_map<char, int> rows[9];
    unordered_map<char, int> columns[9];
    unordered_map<char, int> square[9];
    
    for(int i =0;i<9;i++){
        
        for(int j=0;j<9;j++){
            char ch = A[i][j];
            
            if(ch!='.' && ((rows[i][ch]++ > 0) || (columns[j][ch]++ > 0) || (square[i/3*3+j/3][ch]++ > 0))){
                return false;
            }
        }
    }
    
    return true;

}

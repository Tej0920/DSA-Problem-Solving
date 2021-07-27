string justify(vector<string> &A, int diff, int i, int j){
    int space_needed = j-i-1;
    
    int spaces = diff/space_needed;
    
    int extra_spaces = diff % space_needed;
    
    string output = A[i];
    
    for(int k=i+1;k<j;k++){
        
        int spaces_apply = spaces + (extra_spaces-- > 0 ? 1:0);
        for(int z = 0;z<spaces_apply;z++){
            output+=" ";
        }
        
        output+=A[k];
    }
    
    return output;
}

string left_justify(vector<string> &A, int diff, int i, int j){
    int space_on_right = diff-(j-i-1);
    string output = A[i];
    
    for(int k=i+1;k<j;k++){
        output+=" " + A[k];
    }
    
    for(int z = 0;z<space_on_right;z++){
        
        output+=" ";
    }
    
    return output;
    
}

vector<string> Solution::fullJustify(vector<string> &A, int B) {
    vector<string> output;
    int i = 0, n = A.size();
    
    while(i<n){
        int j = i+1;
        int n_s = A[i].length();
        while(j<n && (n_s+A[j].length() + (j-i-1) < B)){
            n_s += A[j].length();
            j++;
        }
        int diff = B - n_s;
        
        int no_words = j-i;
        if(no_words==1||j>=n){
            output.push_back(left_justify(A,diff,i,j));
        }
        else{
            output.push_back(justify(A,diff,i,j));
        }
        
        i=j;
    }
    
    return output;
}

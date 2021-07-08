vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> output(A.size()+1);
    int carry = 1;
    //output.push_back(0);
    for(int i=0;i<A.size();i++){
        output[i+1] = A[i];
    }
    
    for(int i = A.size()-1;i>=0; i--){
        if(carry!=0){
            output[i+1] = (A[i] + carry) % 10;
            if(output[i+1] == 0){
                carry = 1;
            }
            else{
                carry = 0;
            }
        }
        if(carry == 0){
            
            if(output[1]!=0){
                vector<int> result = {output.begin()+1,output.end()};
                return result;
            }
            else{
                int j = 1;
                int count0 = 0;
                while(output[j]==0){
                    count0++;
                    j++;
                }
                vector<int> result = {output.begin()+1+count0,output.end()};
                return result;
                
            }
            
            
        }
    }
    output[0] = 1;
    return output;
    
    
}

int Solution::solve(vector<int> &A, int B, int C) {
    int n = A.size();
    if(A.size()==0)
        return 0;
    int count_C = 0,temp_C = C,output;
    while(temp_C!=0){
        count_C++;
        temp_C/=10;
    }
    
    if(count_C<B){
        return 0;
    }else if(count_C>B){
        if(A[0]==0){
            output = (n-1)*pow(n,B-1);
        }
        else{
            output = pow(n,B);
        }
        if(B==1&&A[0]==0){
            output++;
        }
        return output;
    }
    else{
        if(B==1){
            for(int i=0;i<n;i++){
                if(A[i]<C){
                    output++;
                }
            }
            
        }
        else{
            vector<int> temp(B);
            for(int i =B-1;i>=0;i--){
                temp[i] = C%10;
                C/=10;
            }
            count_C = 0;
            for(int i = 0;i<n;i++){
                if(A[i]==0){
                    continue;
                }
                if(A[i]>temp[0]){
                    break;
                }
                count_C++;
                
            }
            
            output+=(count_C)*pow(n,B-1);
            int flag =0, j=0;
            for(int i=0;i<n;i++){
                if(A[i]==temp[j]){
                    flag=1;
                }
            }
            j++;
            while(flag==1&&j<=B-1){
                flag = 0;
                int countx = 0;
                for(int i=0;i<n;i++){
                    if(A[i]>temp[j]){
                        countx++;
                    }
                    if(A[i]==temp[j]){
                        flag=1;
                    }
                }
                output-=(countx)*pow(n,B-j-1);
                j++;
            }
            if(j==B&&flag==1){
                output--;
            }
        }
    }
    
    return output;
    
}

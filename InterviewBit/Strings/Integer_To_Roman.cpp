string Solution::intToRoman(int A) {
    if(A<1 || A>3999){
        return "";
    }
    
    string numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", 
             "V", "IV", "I"};
    int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string output = "";
    int i = 0;
    
    while(A>0){
        if(A-values[i]>=0){
            int count = A/values[i];
            for(int j = 0 ;j<count;j++){
                output+=numerals[i];
            }
            A = A%values[i];
        }
        else{
            i++;
        }
    }
    
    return output;
}

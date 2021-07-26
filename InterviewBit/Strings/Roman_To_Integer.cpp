int Solution::romanToInt(string A) {
    
    string numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", 
             "V", "IV", "I"};
    int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    map<char, int> mp;
    mp.insert({'M',1000});
    mp.insert({'D',500});
    mp.insert({'C',100});
    mp.insert({'L',50});
    mp.insert({'X',10});
    mp.insert({'V',5});
    mp.insert({'I',1});
    
    int output, n = A.length();
    output = mp[A[n-1]];
    for(int i=n-2;i>=0;i--){
        if(mp[A[i]]<mp[A[i+1]]){
            output = output - mp[A[i]];
        }
        else{
            output = output + mp[A[i]];
        }
    }
    
    return output;
}

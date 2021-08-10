vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > output;
    unordered_map<string, vector<int> > mp;
    string temp;
    for(int i = 0; i < A.size(); i++){
        temp = A[i];
        sort(temp.begin(),temp.end());
        mp[temp].push_back(i+1);
    }
    
    auto it = mp.begin();
    
    while(it != mp.end()){
        output.push_back(it->second);
        it++;
    }

    return output;
}

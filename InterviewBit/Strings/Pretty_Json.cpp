vector<string> Solution::prettyJSON(string A) {
    vector<string> output;
    int tabs = 0;
    string str="";

    for(int i=0;i<A.length();i++){
        if(A[i]==' '){
            continue;
        }
        else if(A[i]=='[' || A[i]=='{'){
            if(str!=""){
                output.push_back(str);
            }

            str = "";

            for(int j=0;j<tabs;j++){
                str+="\t";
            }
            str+=A[i];
            output.push_back(str);
            str="";
            tabs++;
        }
        else if(A[i]==']' || A[i]=='}'){
            if(str!=""){
                output.push_back(str);
            }

            str = "";

            for(int j=0;j<tabs-1;j++){
                str+="\t";
            }
            str +=A[i];
            if(i<A.length() && A[i+1]==','){
                str+=A[++i];
            }  
            output.push_back(str);
            str="";
            tabs--;

        }
        else
        {
            if(str=="")
            {
                for(int j=0;j<tabs;j++)
                    str+="\t";
            }
            str+=A[i];
            if(A[i]==',')
            {
                output.push_back(str);
                str="";
            }
        }

    }
    return output;
}

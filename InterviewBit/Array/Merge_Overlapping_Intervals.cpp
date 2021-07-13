/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool cmp(Interval A, Interval B){
     return A.start<B.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> output;
    if(A.size()==0){
        return output;
    }
    sort(A.begin(),A.end(),cmp);
    Interval itr = A[0];
    
    for(int i=0;i<A.size();i++){
        if(A[i].start<=itr.end){
            itr.end = max(A[i].end,itr.end);
        }else{
            output.push_back(itr);
            itr = A[i];
        }
    }
    
    output.push_back(itr);
    
    return output;
}

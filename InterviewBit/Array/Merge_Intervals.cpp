/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> output;
    
    int n = intervals.size();
    int start = newInterval.start, end = newInterval.end;
    bool check = false;
    for(int i=0;i<n;i++){
        if(intervals[i].end<start){
            output.push_back(intervals[i]);
        }
        else if(intervals[i].start>end){
            if(!check){
                output.push_back({start,end});
            }
            output.push_back(intervals[i]);
            check = true;
        }
        else{
            start = min(start,intervals[i].start);
            end = max(end,intervals[i].end);
        }
        
    }
    
    if(!check){
        output.push_back({start,end});
    }
    
    return output;
}

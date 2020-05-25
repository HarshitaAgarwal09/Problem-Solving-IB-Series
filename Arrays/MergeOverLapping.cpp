/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &intervals) {
    
     vector<Interval> ans;
        
        if(intervals.size() == 0) return ans;
        
        for(int i = 0 ; i < intervals.size(); i++)
        {
            if(intervals[i].start>intervals[i].end)
            {
                int temp = intervals[i].start;
                intervals[i].start = intervals[i].end ;
                intervals[i].end  = temp;
            }
        }
        
        sort(intervals.begin(), intervals.end(), [](Interval a, Interval b){
            return a.start < b.start;
        });
        
        ans.push_back(intervals[0]);
        
        int end = 0;
        for(int i = 1 ; i < intervals.size(); i++) 
        {    
            if(ans[end].end >= intervals[i].start) 
            {
                ans[end].end = max(ans[end].end,intervals[i].end);
            }
            else
            {
                ans.push_back(intervals[i]);
                end++;
            }
        }
        
        return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) 
{
    int n = intervals.size();
    vector<Interval> result;
    bool ismerge = false;
    
    if(newInterval.start > newInterval.end)
    {
        int temp  = newInterval.start;
        newInterval.start = newInterval.end;
        newInterval.end = temp;
    }
   
    int i = 0;
    
    while( i < n && intervals[i].end < newInterval.start)  {
        result.push_back(intervals[i]);
        i++;
    }
    
    while( i < n  && intervals[i].start < newInterval.end)
    {
        newInterval.start = min(newInterval.start , intervals[i].start);
        newInterval.end  = max(newInterval.end , intervals[i].end);
        i++;
    }
    
    result.push_back(newInterval);
    
    while( i < n)  
    {    
        result.push_back(intervals[i]);
        i++;
    }
    return result;
}

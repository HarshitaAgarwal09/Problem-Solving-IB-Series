int Solution::maximumGap(const vector<int> &A) 
{
    int dist = -1;
    
   vector<pair<int,int>> mp;
    
    for(int i = 0 ; i<A.size(); i++)
    {
        mp.push_back(make_pair(A[i],i));
    }
    
    sort(mp.begin(), mp.end());
     
    int maxRIdx = -1;
    int maxDiff = 0;
    for(int idx = A.size()-1 ; idx>=0; idx--)
    {
         pair<int, int> ele = mp[idx];
        // cout<<ele.first<<" "<<ele.second<<endl;
        
        maxDiff = max(maxDiff, maxRIdx - ele.second);
        maxRIdx = max(maxRIdx, ele.second);
    }
    
    return maxDiff;
}

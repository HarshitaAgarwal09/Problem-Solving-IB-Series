int Solution::maximumGap(const vector<int> &B)
{
    vector<int> A = B;
    
    sort(A.begin(),A.end());
    
    int ans = 0;
    for(int i = 0 ;i<A.size()-1;i++)
        ans = max(ans,A[i+1]-A[i]);
        
    return ans;
}

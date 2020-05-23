int Solution::maxSubArray(const vector<int> &A) 
{
    int omax = A[0];
    int sum = A[0];
    for(int i = 1 ; i<A.size();i++)
    {
        sum = max((sum+A[i]),A[i]);
        omax = max(omax , sum);
    }
    return omax;
}

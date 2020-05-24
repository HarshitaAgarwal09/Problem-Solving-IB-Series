vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    long n = A.size();

    long s = (n*(n+1))/2;
    long ss = (n*(n+1)*(2*n+1))/6;
    
    int a = 0 ;
    
    for(int i = 0 ; i<n ; i++)
    {
        s -= (long)A[i];
        ss -= ((long)A[i]*(long)A[i]);
    }

    a = (int)(((ss/s) - s)/2) ;
    
    return {a, a+(int)s};
}

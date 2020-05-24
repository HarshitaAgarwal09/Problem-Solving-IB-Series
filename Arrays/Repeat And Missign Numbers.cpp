vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    int n = A.size();

    long long s = (n*(n+1))/2;
    long long ss = (n*(n+1)*(2*n+1))/6;
    
    long long a = 0 ;
    
    for(int i = 0 ; i<n ; i++)
    {
        s -= A[i];
        ss -= A[i]*A[i];
    }

    a = ((ss/s) - s)/2 ;
    
    return {a, a+s};
}

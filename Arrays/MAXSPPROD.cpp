int mod = (int)1e9+7;

int Solution::maxSpecialProduct(vector<int> &A) 
{
    int n = A.size();
    
    int ans = 0;
    for(int i = 0 ; i<n; i++)
    {
        int max_ = -1;
        int min_= INT_MAX;
        
        for(int j = 0 ; j<i; j++)
            if(A[j]>A[i])  max_ = max(max_,j);

        for(int j = i+1; j<n;j++)
            if(A[j]>A[i]) min_ = min(min_,j);
        
        if(max_!= INT_MIN && min_!=INT_MAX) ans = max(ans, (max_*min_)%mod);
    }
    
    return ans;

}

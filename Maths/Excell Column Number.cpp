int Solution::titleToNumber(string A) 
{
    int ans = 0;
    int m = 1;
    for(int i = A.length()-1; i>=0 ; i--)
    {
        int code = (char)A[i] - 'A' + 1;
        ans += m*(code);
        m*=26;
    }
    return ans;
}

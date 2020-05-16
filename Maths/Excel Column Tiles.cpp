string Solution::convertToTitle(int A) 
{
    string ans = "";
    while(A>0)
    {   A-=1;
        ans= char( A%26 +'A') + ans;
        A/=26;
    }
    return ans;
}

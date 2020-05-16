int mod = 1e6+3;
int fact(int num)
{
    if(num==1||num==0) return 1;
     return (num*fact(num-1))%mod; 
}

int Solution::findRank(string A) 
{
    int ans = 0;
    for(int i = 0 ; i<A.length(); i++)
    {
        int count = 0;
        for(int j = i+1 ; j<A.length(); j++)
        {
            if(A[j]<A[i]) count++;
        }
        ans= ans +  (count*fact(A.length()-i-1))%mod;
        ans=ans%mod;
    }
    return (ans+1)%mod;
}

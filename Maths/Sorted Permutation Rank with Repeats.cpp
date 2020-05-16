int mod = 1e6+3;
int fact(int num)
{
    if(num<=1 ) return 1;
     return (num*fact(num-1))%mod; 
}

long long power(long long  a , long long b)
{
    if(b==0) return 1;
    
    long long temp = power(a,b/2)%mod;
    temp = (temp * temp)%mod;
    
    if(b%2==0)  return temp;
    else  return (temp*a)%mod;
}

int Solution::findRank(string A) 
{
    long long  ans = 0;
    for(int i = 0 ; i<A.length(); i++)
    {
        long long count = 0;
        map<char,int> mp ;
        for(int j = i+1 ; j<A.length(); j++)
        {
            if(A[j]<A[i]) count++;
            mp[A[j]]++;
        }
        
        count%=mod;
        mp[A[i]]++;
        
        long long  d=1;
        for(auto c:mp)  d = (d*fact(c.second))%mod;
        
        
        ans = ans +  ( (count * fact(A.length()-i-1)) % mod  * power(d,mod-2) )%mod;
        ans%=mod;
    }
    return (ans+1)%mod;
}

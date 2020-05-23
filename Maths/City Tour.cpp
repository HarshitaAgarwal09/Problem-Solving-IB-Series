int mod = 1e9 + 7;

long long power(long long  a , long long b)
{
    if(b<=0) return 1;
    
    long long temp = power(a,b/2)%mod;
    temp = (temp * temp)%mod;
    
    if(b%2==0)  return temp;
    else  return (temp*a)%mod;
}

int Solution::solve(int A, vector<int> &B) 
{
    int n = B.size();
    sort(B.begin(),B.end());
    
    vector<long long> fact(A+1,1);
    for(int i = 1; i<=A ;i++)
    {
        fact[i] = (i*fact[i-1])%mod;
    }
    
    long long n1 = fact[A-n];//total combinations
    long long n2 = 1;//permutations among each group
    long long d  = 1;//repeated combinations // denominator
  
    for(int i=1 ; i<n ; i++)
    {   
        long long diff = B[i]-B[i-1]-1; // diff between indexes - 1  = inbetween group elements count
        
        d = (d*fact[diff]) % mod;
        n2 = (n2*power(2,diff-1))%mod;
    }
    
    long long startG = fact[B[0]-1]; // start group elements
    long long endG = fact[A-B[n-1]]; // end group elements
    
    d = ( (d * startG )% mod * endG)%mod;

    long long temp =  power(d,mod-2) % mod;
    long long result  = (((n1*n2)%mod *temp )%mod)%mod;
    
    return result;
}
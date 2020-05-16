int Solution::gcd(int A, int B) 
{    
    return ( A==0 ? B : gcd(B%A,A));
}

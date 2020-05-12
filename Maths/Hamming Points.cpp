//=========================================O(n^2)==================================================================
//TLE 
// int mod = 1e9+7;
// int countSetBits(int num)
// {
//     int count = 0;
//     while(num!=0)
//     {
//         if((num&1) == 1) count++;
//         num >>= 1 ;
//     }
//     return count;
// }

// int Solution::hammingDistance(const vector<int> &A) {
//     int ans = 0;
//     for(int i=0;i<A.size();i++){
//         for(int j = i+1 ; j<A.size(); j++){
//             ans+=countSetBits(A[i]^A[j]);
//             ans = ans % mod;
//         }
//     }
//     return (2*ans)%mod;
// }

int mod = 1e9+7;
int Solution::hammingDistance(const vector<int> &A) 
{
    long long  ans = 0;
    for(int b=0;b<32;b++)
    {
        long long count = 0;
        for(int i = 0 ; i<A.size(); i++)
        {
            int n = A[i]>>b;
            count+=(n&1);
        }
        count%=mod;
        ans += (count*(A.size()-count))%mod;
    }
    return (2*ans)%mod;
}

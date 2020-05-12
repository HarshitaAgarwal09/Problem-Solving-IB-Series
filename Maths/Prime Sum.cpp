vector<int>  Solution::primesum(int N) 
{        
        // Generate isPrime List less equal than N
        vector<bool> isPrime(N + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        
        // Sieve of Erastothenes
        for(int i = 2; i*i <= N; i++) 
        {
            if (!isPrime[i]) continue;
            for (int j = i * i; j <= N; j += i) isPrime[j] = false;
        }
         
        vector<int> ans; 
        
        for(int i = 2; i <= N; ++i) 
        {
            if(isPrime[i] && isPrime[N - i]) {
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(N - i);
                return ans;
            }
        } 
        return ans;
}
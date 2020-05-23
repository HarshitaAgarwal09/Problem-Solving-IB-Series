int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int n = A.size()-1;
    if(n==0) return 0;
    //vector<vector<int>> path(A[n]+1,vector<int>(B[n]+1,0));
    
    int step = 0,step2 = 0;
    for(int i = 1 ;i<=n; i++)
    {
        int dr = abs(A[i]-A[i-1]);
        int dc = abs(B[i]-B[i-1]);
        step += min(dr,dc) + abs(dr-dc); 
    }
    return step;
}

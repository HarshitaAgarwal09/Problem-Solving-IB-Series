int Helper(vector<vector<bool>>& grid, int sr, int sc, int dr,int dc)
{
    if(sr == dr-1 && sc == dc-1) return 1;
    int count = 0;

    if(sr+1<dr) count += Helper(grid,sr+1,sc,dr,dc);
    if(sc+1<dc) count += Helper(grid,sr,sc+1,dr,dc);
    
    return count;
}

int Solution::uniquePaths(int A, int B) 
{
    vector<vector<bool> > grid; //(A,vector<int>(B,false));

    return Helper(grid,0,0,A,B);
}
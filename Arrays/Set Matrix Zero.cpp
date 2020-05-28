void Solution::setZeroes(vector<vector<int> > &A) 
{
    int n = A.size();
    int m = A[0].size();

        
    vector<bool> row(n,false);
    vector<bool> col(m,false);
    
    for(int i = 0 ;i<n ;i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            if(A[i][j] == 0 )  
            {
                row[i] = true;
                col[j] = true;;
            };
        }
    }
    
    for(int i = 0 ;i<n ;i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            if(  row[i] || col[j] ) A[i][j] = 0;
        }
    }
    
}

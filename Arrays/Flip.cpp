vector<int> Solution::flip(string A) 
{
    int ansC = -1;
    int ansS = -1;
    int ansE = -1;
    
    int count = -1;
    int S = -1;
    
    for(int E = 0 ; E <A.length(); E++)
    {
        if(A[E] == '0')
        {
            count++;
            
            if(count<1)
            {
                count = 1;
                S = E;
            }
            
            if(count>ansC)
            {
                ansC = count;
                ansS = S;
                ansE = E;
            }
        }
        else count--;
    }
    
    if(ansS==-1 || ansE == -1) return {};
    return {ansS+1 , ansE+1};
    
}

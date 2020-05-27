vector<int> Solution::maxset(vector<int> &A) 
{
    int anss = -1;
    int anse = -1;
    long long anssum = 0;
    int anssize = 0;

    for(int i = 0; i<A.size(); i++)
    {
        int size = 0;
        int s = i;
        int e = i;
        long long sum = 0;
        
        while(i<A.size() && A[i]>=0)
        {
            size++;
            sum += (long long)A[i];
            e = i;
            i++;
        }
        
        if((sum > anssum) || (sum == anssum && size>anssize))
        {
            anss = s;
            anse = e;
            anssum = sum;
            anssize = size;
        }
        
    }
    
    vector<int> ans;
    
    if(anss!=-1 && anse!=-1){
        for(int i = anss; i<=anse; i++){
             ans.push_back(A[i]);
        }
    }
    return ans;
}

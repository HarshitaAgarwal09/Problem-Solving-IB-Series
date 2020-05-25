
int pivotPoint(int s, int e, vector<int> &arrive, vector<int> &depart)
{
    int pivot = e;
    int i = s;
    int j = s;
    
    for(i = s ; i< e; i++)
    {
        if(arrive[i] < arrive[pivot])
        {
             swap(arrive[i],arrive[j]);
             swap(depart[i],depart[j]);
             j++;
        }
    }
    
    swap(arrive[e],arrive[j]);
    swap(depart[e],depart[j]);
    
    return j;
}

void Qsort(int s, int e, vector<int> &arrive, vector<int> &depart)
{
    if(s >= e) return ;
    int pivot = pivotPoint(s,e, arrive,depart);
    Qsort(s,pivot-1,arrive,depart);
    Qsort(pivot+1,e,arrive,depart);
}

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    Qsort(0,arrive.size()-1,arrive,depart);   
    
    int n = arrive.size();
    int rooms[K] ={0};
     //cout<<arrive[0]<<" "<<depart[0]<<endl;
    for(int i = 0 ; i<arrive.size(); i++)
    {
        if(arrive[i]==depart[i]) continue;
        
        int r = 0;
        for(r = 0;r<K ; r++)
        {
            
            if(arrive[i]>=rooms[r])
            {
                rooms[r] = depart[i];
                break;
            }
            
        }
        if(r == K ) return false;   
    }
    return true;;
}

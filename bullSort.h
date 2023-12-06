void sortWithBull(int t[],int n)
{
    int i , temp;
    while(n > 0)
    {
        i = 0;
        while(i < n-1)
        {
            if(t[i] > t[i+1])
            {
                temp = t[i];
                t[i] = t[i+1];
                t[i+1] = temp;
            }
            i++;
        }
        n--;
    }
}
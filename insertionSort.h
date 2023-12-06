void insertion(int t[],int n)
{
    int i ,temp,pos;
    for (i = 0; i < n; i++)
    {
        temp = t[i];
        pos = i;
        while((pos > 0) && (t[pos-1] > temp))
        {
            t[pos] = t[pos-1];
            pos--;
        }
        t[pos] = temp;
    }
}
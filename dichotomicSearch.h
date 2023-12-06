int dichotomiqueSearch(int t[],int var,int n)
{
    int med , pos , stop = 0 , min = 0 , max = n;
    do{
        med =( (min + max) /2);
        if(t[med] == var)
        {
            stop = 1;
            pos = med;
        }else{
            if (var > t[med])
            {
                min = med + 1;
            }else{
                max = med - 1;
            }
        }
    }while(stop != 0);
    return pos;
}
#include <stdio.h>
#include <stdlib.h>
#include "linearsearch.h"
// int linearSearch(int arr[] , int size , int x);
int main(){
    int arr[100], n , x;
    do{
        printf("\n\nEnter The Size of The Table >>: ");
        scanf("%d",&n);
    }while(n < 0 || n > 100);

    printf("\n\nFill up the table: \n");
    for(int i = 0 ; i < n; i++)
    {
       printf(">> ");
       scanf("%d",&arr[i]);
    }

    printf("\n\nEnter The Number You are Searching for >>: ");
    scanf("%d",&x);

    if (linearSearch(arr,n,x) == 1)
    {
        printf("\n\nYes The Number %d Is Inside The List\n\n",x);
    }
    else{printf("\nSorry The Number %d Is Not Inside\n\n",x);}
   
    return 0;
}
// int linearSearch(int arr[] , int size , int x)
// {
//     int isHere = 0;
//     int i = 0;
//     while (i < size)
//     {
//         if(arr[i] == x)
//         {
//             isHere = 1;
//             break;
//         }
//         i++;
//     }
//     return isHere;
// }
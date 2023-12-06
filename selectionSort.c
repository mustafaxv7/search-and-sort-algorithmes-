#include <stdio.h>
#include <stdlib.h>
#include "insertionSort.h"

void TriWithSelection (int tab[] ,int numberOfElements);
void selectionSort (int tab[], int numberOfElements);
int main(){
    int tab[100];
    int i,j,temp,n,pos;
    do{
        printf("\n\nEnter The size of The Table >>: ");
        scanf("%d",&n);
    }while(n < 0 || n > 100);

    printf("\n\nFill up the table to Sort it: \n");
    for(i = 0; i < n; i++){
        printf(">> ");
        scanf("%d",&tab[i]);
    }
   
    
     selectionSort(tab,n);
    
    
    printf("This value is in the postion %d",pos);
    printf("\n\nThe Sorted Table is: \n");
    printf("\n{ ");
    for(i = 0; i < n ; i++){
       printf(" %d , ",tab[i]);
    }
    printf(" }\n\n");
    return 0;
    
    

}

void TriWithSelection (int tab[] ,int numberOfElements){
    int temp , i , j;
    for(i = 0; i < numberOfElements; i++){
        for(j = i+1 ; j < numberOfElements; j++){
            if(tab[j] < tab[i]){
                temp = tab[j];
                tab[j] = tab[i];
                tab[i] = temp;
            }
        }
       
    }
}

void selectionSort (int tab[], int numberOfElements)
{
  int i = 0 ; int  j , minIndex,temp;
  while(i < numberOfElements)
  {
    minIndex = i;
    for(j = i+1 ; j < numberOfElements ; j++){
        if(tab[j] < tab[minIndex])
        {
            minIndex = j;
        }
    }
    temp = tab[minIndex];
    tab[minIndex] = tab[i];
    tab[i] = temp;
    i++;
  }
}
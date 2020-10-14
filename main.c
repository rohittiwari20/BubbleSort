
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
/*
 * 
 */
void bubbleSort(int array[],int size)
{
     for(int step=0;step<MAX-1;step++)
    {
        for(int j=0;j<MAX-1-step;j++)
        {
            if(array[j]>array[j+1])
            {
             int temp=array[j];
             array[j]=array[j+1];
             array[j+1]=temp;
            }
        }
    }
    
}
void display(int array[],int size)
{
    printf("The Sorted array is:\n");
    for(int i=0;i<MAX;i++)
    {
        printf("SORTED ARRAY ELEMENT %d : %d\n",i,array[i]);
    }
}
int main(int argc, char** argv) {
  
    int array[MAX];
    printf("enter the element:\n");
    for(int i=0;i<MAX;i++)
    {
        scanf("%d",&array[i]);
    }
    /*BUBBLE SORT*/
    bubbleSort(array,MAX);
    display(array,MAX);
    
    
            

    return (EXIT_SUCCESS);
}


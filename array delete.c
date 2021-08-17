#include<stdio.h>
void main()
{
    int array[]={1,3,5,7,9,13};
    int n=6;
    int index=2;
    int i;
    printf("the orginal elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("array[%d]=%d \n",i,array[i]);
    }
    for(i=index;i<n;i++)
    {
    array[i]=array[i+1];
    }
    n--;
    printf("after deletion\n");
    for(i=0;i<n;i++){
    printf("array[%d]=%d\n",i,array[i]);
    }
}

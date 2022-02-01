#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *temp,*ptr;
    int N,lar=0,i;
    printf("enter number of elements:");
    scanf("%d",&N);
    ptr=(int*)calloc(N,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated\n");
        exit(0);
    }
    for(i=0, temp=ptr; i<N; i++, temp++)
    {
        printf("enter %d#",i+1);
        scanf("%d",temp);
        if(*temp>lar)
        {
            lar=lar+ *temp;
            *temp =lar- *temp;
            lar=lar- *temp;
        }
    }
    printf("%d is largest number\n",lar);

    free(ptr);
}

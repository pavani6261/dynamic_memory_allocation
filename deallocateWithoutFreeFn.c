#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n=2;
	int *ptr = (int*) malloc(n*sizeof(int));
    int mul=1;
    int *a,i;
	for(i=0,a=ptr;i<n;i++,a++)
    {
        printf("enter number to multply: ");
        scanf("%d",a);
        mul=mul * *a;
    }
    printf("%d",mul);
	/* we are calling realloc with size = 0 */
	realloc(ptr, 0);


	return 0;
}


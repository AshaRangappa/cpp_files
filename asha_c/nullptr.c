#include<stdio.h>
#include <stdlib.h>

int main(){
int *ptr=NULL;
ptr=(int *)malloc(sizeof(int));
*ptr=12;
printf("*ptr is %d\n",*ptr);
free(ptr);
printf("*ptr is %d\n",*ptr);
}

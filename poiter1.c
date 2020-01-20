#include<stdio.h>

int main(){
int a=5;
//int *p=a;
int *p=&a;
*p=10;
//p=&a;
printf("a add %u\n",&a);
printf("p val %d\n",p);
printf("p val %d\n",*p);
printf("a val %d\n",a);
}

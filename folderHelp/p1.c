#include<stdio.h>

int main(){
int x = 5;
int* p = &x;
x=(*p)*(*p);
printf("%d\n", *p);
}
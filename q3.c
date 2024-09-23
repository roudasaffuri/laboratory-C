#include <stdio.h>

int f(int a , int b){
 
int max  = a>b? a : b ;
int x = 1;
int num;
int finalnum=0;

while(max>0){
    if(a%10>b%10){
    num=a%10*x;
    finalnum+=num;
    }else{
        num=b%10*x;
        finalnum+=num;
    }
    max = max/10;
    a=a/10;
    b=b/10;
    x=x*10;
}
return finalnum;
}

int main() {
    int result = f(19601, 237);
    printf("%d\n", result);

    return 0;
}
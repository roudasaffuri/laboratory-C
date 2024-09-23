#include <stdio.h>
#include <ctype.h>
#include <string.h> // For strlen


int isId(char *str){
    int num [9]={0}; 
    int sum =0 ; 
    for(int i = 0 ; i<strlen(str);i++){

        if(!isdigit(str[i]))
        return 0;

        int x = str[i]-'0';
        if(i%2 == 0 ){
            num[i]=1*x;
        }else{
            num[i]=2*x;
        }
    }

    for(int i = 0 ; i <9 ; i++){
        if(num[i]>9){
            sum+=num[i]%10+num[i]/10;
        }
        else{
            sum+=num[i];

    }
    }
    return (sum==30);
}

int main(){

    printf("%d", isId("123123123"));
}
#include <stdio.h>

int searchBetween(int arr [] , int len , int start,int end,int c){

for(int i = start; i<=end;i++){
    if(arr[i]==c)
    return 1;
}
return -1;

}

int main() {
    int arr [] = {-3,1,12,17,18,22,100,145};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", len);
int result = searchBetween(arr,8,1,6,100);
printf("%d\n",result);
result = searchBetween(arr,8,1,6,145);
printf("%d\n",result);
    return 0;
}
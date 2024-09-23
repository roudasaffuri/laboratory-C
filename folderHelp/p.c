#include <stdio.h>
#include <stdlib.h>

int* fun(int x) {
    int* res = (int*)malloc(sizeof(int));
    if (res == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    *res = x + x; // הקצאה לזיכרון המצביע
    return res;
}

int* func(int arr []){
    int* res = (int*)malloc(7*sizeof(int));
    if (res == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    for(int i = 0 ; i <7;i++){
        res[i] = arr[i] + arr[i];
    }
    return res;
}

int main() {
    int x = 5;
    int* resfinal = fun(x); // מקבלים מצביע לערך המחושב

    if (resfinal != NULL) {
        printf("%d\n", *resfinal); // מדפיסים את הערך שהמצביע מצביע אליו
        free(resfinal); // משחררים את הזיכרון שהוקצה
    }
printf("\n");
int arr [] = {1,2,3,4,5,6,7};
int* resf = func(arr);


for(int i = 0 ; i < 7 ; i++){
    printf("%d   ", resf[i]);
}

    return 0;
}

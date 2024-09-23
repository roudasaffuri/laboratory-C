#include <stdio.h>
#include <stdlib.h>

 int* sortByModulo(int arr[], int len, int m) {
    // Allocate memory for the new array
    int* newarr = (int*)malloc(len * sizeof(int));

    int ind = 0;
  
    for(int i = 0 ; i < len;i++){
        for(int j = 0 ; j<len ;j++){

            if(arr[j]%m== i)
            newarr[ind++]=arr[j];

        }
    }
    
    return newarr;
}
    


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    int* result = sortByModulo(arr, len, 3);

    for (int i = 0; i < len; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(result);

    return 0;
}

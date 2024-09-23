#include <stdio.h>
#include <stdlib.h>

int* fun(int arr[], int day, int num);

int main() {
    int arr[] = {10108, 10212, 10201, 20101, 20201, 30310, 40101, 50101, 50206, 50308, 60101, 60205, 60310, 70105, 70210, 70312, 0};
    
    int *res1 = fun(arr, 7, 5);
    
    if (res1 == NULL) {
        // Handling in case of memory allocation failure in fun
        return 1;
    }

    printf("Total number of films demonstrated in all halls:\n");
    for (int i = 0; i < 7; i++) {
        printf("day %d: %d\n", i + 1, res1[i]);
    }

    free(res1);
    return 0;
}

int* fun(int arr[], int day, int num) {
    int* res = (int*)malloc(7 * sizeof(int));
    if (res == NULL) {
        printf("Not enough memory\n");
        return NULL;
    }

    // Initialize the result array to zero
    for (int j = 0; j < 7; j++) {
        res[j] = 0;
    }

    int hallCount = 0;

    for (int i = 0; arr[i] != 0; i++) {
        int currentDay = arr[i] / 10000;
        int count = arr[i] % 100;
        
        // Increment the number of films for the corresponding day
        if (currentDay >= 1 && currentDay <= 7) {
            res[currentDay - 1]++;
        }

        // Check for specific day and number of screenings
        if (currentDay == day && count > num) {
            hallCount++;
        }
    }

    printf("The number of halls that screened more than %d times on day %d is: %d\n", num, day, hallCount);
    return res;
}

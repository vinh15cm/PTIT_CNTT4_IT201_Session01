#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1,23,4,2,4,1,2,4,78,2};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    //Mang ban dau
    for (int i = 0; i < arrLength; i++) {
        printf("%d ", arr[i]);
    }
printf("\n");
// độ phức tạp vong for la O(n^2) vi co 2 vong lap for
for (int i = 0; i < arrLength; i++) {
for (int j = 0; j < arrLength; j++) {
if (arr[i] == arr[j]) {
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
             }
       }
}
// mảng sau khi sắp xếp
for (int i = 0; i < arrLength; i++) {
printf("%d ", arr[i]);
}
return 0;
}
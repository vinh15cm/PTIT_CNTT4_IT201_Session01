#include<stdio.h>
#include<stdbool.h>
#define MAX_VALUE 1000

int main(){
int arr[] = {1,2}
int arrLength = sizeof(arr) / sizeof(arr[0]);
bool check = false;
for (int i = 0; i < arrLength; i++){// độ phứ tạp 2 vòng lặp for là O(n^2)
for (int j = 0; j < arrLength; j++){
if (arr[i] == arr[j]){
check = true;
break;
}
}
if (check) break;
}
if (check)
printf("cach 1 (for) : co trung lap \n");
else
printf("cach 1 (for) :khong co trung lap \n");
return 0;
}
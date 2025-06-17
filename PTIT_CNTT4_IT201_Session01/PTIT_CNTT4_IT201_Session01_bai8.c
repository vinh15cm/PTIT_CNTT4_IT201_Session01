#include <stdio.h>
int main(){
int arr[] = {1,3,2,1,4,2,1,3,3,3,3};
int n = sizeof(arr)/sizeof(arr[0]);
int maxCount =0;
int total;
for (int i = 0; i < n; i++) {// for long nhau co do phuc tap la O(n^2)
int count =1;
for (int j = 0; j < n; j++) {
if (arr[i] == arr[j]) {
count++; // độ phức tạp của count là : O(1);
}
if( count > maxXCount){
maxCount = count;
total = arr[i];
}
}
printf("phan tu xuat hien nhieu nhat la : %d(xuat hien %d lan)\n",total,maxCount);
return 0;
}
# include <stdio.h>
int main(){
int arr[] = {1,2,3,2,1,23,1,2,3,1,23,2};
int arLength = sizeof(arr)/sizeof(arr[0]);
int x;
printf("%d",&x);
int sum =0;
for(int i=0;i<arLength;i++){// vong lăpj for độ phức tạp là O(n)
if(arr[i]==x){
 sum = sum + arr[i];
}
}
printf("số trung lập cần tìm là %d xuất hiện: %d",x,sum);
return 0;
}
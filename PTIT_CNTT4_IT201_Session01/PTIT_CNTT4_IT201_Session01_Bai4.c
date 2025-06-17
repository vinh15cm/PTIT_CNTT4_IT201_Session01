#include <stdio.h>
int main() {
 int n;// độ phức tạp không gian của n là : O(1)
 printf("moi ban nhap n");
 scanf("%d",&n);

 int sum =0;
 for(int i=0;i<n;i++){// vong lặp for chạy n vậy độ phức tạp là O(n)
 sum += i;
}
printf("%d",sum);
return 0;
}
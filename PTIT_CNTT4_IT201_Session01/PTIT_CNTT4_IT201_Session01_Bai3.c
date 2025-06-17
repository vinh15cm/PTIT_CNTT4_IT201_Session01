# include <stdlib.h>
int* mallocArray(int n){
 int * ar = (int*)malloc(n*sizeof(int)); // đọo phức tạp không gian của n là : O(n)
 for (int i = 0; i < n; i++){
        arr[i] = i;
}
return arr;
}

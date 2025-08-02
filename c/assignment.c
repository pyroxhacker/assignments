#include<stdio.h>
int main(){
    int n = 6;
  int arr[7] = {44, 55, 66, 77, 88, 99, 0};
  int i, j, ele;
  ele = 100;
  arr[n] = ele;
  printf("before insertion:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
   
  }
  printf("\n");
  printf("after insertion: \n");
  for (j = 0; j <= n; j++)
  {
    printf("%d ", arr[j]);
    
  
  }
  return 0;
}

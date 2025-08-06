
 #include<stdio.h>
int main(){
    int n;
   printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  
    
 printf("Enter %d numbers :\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  int i, j, ele;
  printf("enter your value ") ;
  scanf("%d",&ele);
  
  
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


#include<stdio.h>
int main()
{
     int n, c, k;
     int i=1;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
  {
    for(k = 1; k <= c; k++){
      printf("%d", i); 
      printf(" ");
      i++;
    }

    printf("\n");
  }

  return 0;
}
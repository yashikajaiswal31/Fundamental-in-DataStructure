//fibonacci search

#include <stdio.h>
int min(int x, int y) 
{
  if(x<=y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

int fibonacciSearch(int arr[], int x, int n)
{
  int fibMMm2 = 0; 
  int fibMMm1 = 1; 
  int fibM = fibMMm2 + fibMMm1; 

  while (fibM < n) 
  {
    fibMMm2 = fibMMm1;
    fibMMm1 = fibM;
    fibM = fibMMm2 + fibMMm1;
  }

  int offset = -1;

  while (fibM > 1) 
  {
    int i = min(offset + fibMMm2, n - 1);

    if (arr[i] < x) 
    {
      fibM = fibMMm1;
      fibMMm1 = fibMMm2;
      fibMMm2 = fibM - fibMMm1;
      offset = i;
    }

    else if (arr[i] > x) 
    {
      fibM = fibMMm2;
      fibMMm1 = fibMMm1 - fibMMm2;
      fibMMm2 = fibM - fibMMm1;
    }

    else
    {
      return i;
    }
  }

  if (fibMMm1 && arr[offset + 1] == x)
  {  
    return offset + 1;
  }
  else
  {
    return -1;
  }
}

void fibmenu()
{
  int n, x, i;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter elements in the array: ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter element to search: ");
  scanf("%d", &x);
  int ind = fibonacciSearch(arr, x, n);
if(ind>=0)
  printf("Found at index: %d",ind);
else
  printf("%d isn't present in the array",x);
}

int main()
{
  fibmenu();
}

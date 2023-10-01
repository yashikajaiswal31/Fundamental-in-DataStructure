//BINARY SEARCH-
#include <stdio.h>
void display(int ar[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",ar[i]);
    }
    
}
int main()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the array:\n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int sE;
    printf("Enter element to be searched: ");
    scanf("%d",&sE);
    //binary search
    int left=0,right=n-1;
    while(left<=right)
    {
            int mid=(left+right)/2;
            if(ar[mid]==sE){
                printf("Element found at position %d",mid+1);
                return 0;
            }
            else if (ar[mid]>sE)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
    }
    printf("Element not found");
}

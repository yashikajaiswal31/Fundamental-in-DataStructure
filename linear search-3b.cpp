//Linear search-

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
    printf("Enter the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int sE;
    printf("Enter element to be searched: ");
    scanf("%d",&sE);
    //linear search
    for (i = 0; i < n; i++)
    {
            if(ar[i]==sE)
            {
                printf("Element found at position %d\n",i+1);
                return 0;
            }
        }
        printf("Element not found");
        return 0;
    }

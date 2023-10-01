//Selection sort-
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
    printf("Enter the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        int min=i;
        for (int j = i; j < n; j++)
        {
            if(ar[min]>ar[j])
            {
                min=j;
            }
        }
        int temp=ar[i];
        ar[i]=ar[min];
        ar[min]=temp;
    }
    display(ar,n);
    return 0;
}

//Insertion sort-

#include<stdio.h>
int main()
{
	int arr[10];
	int i,j,n,temp;
	printf("\n Enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
     {
        printf("\n Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
     }
	for(i=1; i<n; i++)
	{
		temp=arr[i];
		j=i-1;
    	while(j>=0 && arr[j]>temp)
    	{
		    arr[j+1]=arr[j];
		    j=j-1;
	    }
    	arr[j+1]=temp;
	}
	
	printf("Sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
	return 0;
}



//BUBBLE SORT
#include<stdio.h>

int main()
{
	int arr[50],num,x,y,temp;
	
	printf("Enter the elements to be inserted in the array : ");
	scanf("%d",&num);
	

	
	for(x=0;x<num;x++)
	{
			printf("Enter the value of elements : ");
            scanf("%d",&arr[x]);
    }
	for(x=0;x<num-1;x++)
	{
		for(y=0;y<num-x-1;y++)
		{
			if(arr[y]>arr[y+1])
			{
				temp = arr[y];
				arr[y] = arr[y + 1];
				arr[y + 1] = temp;
			}
		}
	}
	printf("After implementing the bubble sort : ");
	
	for(x=0;x<num;x++)
	{
		printf("%d  ", arr[x]);
	}
	
	return 0;
	
}

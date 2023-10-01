//quick sort-

#include <stdio.h>
int partition(int a[],int l,int h)
{
	int pivot=a[l];
	int j=h;
	int i=l;
	do{
		do{i++;
		}while(a[i]<=pivot);
		do{j--;
		}while(a[j]>pivot);
		if(i<j)
		{
			int temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}while(j>i);
	int aks;
	aks=a[j];
	a[j]=a[l];
	a[l]=aks;
	return j;
	
}
void quicksort(int a[],int l ,int h)
{
	if(l<h)
	{
	
	int d=partition(a,l,h);
	quicksort(a,l,d);
	quicksort(a,d+1,h);
}
}

int main()
{
	int a[100];
	for(int i=0 ;i<7 ;i++)
	{
		printf("enter the elements in the array\n");
		scanf("%d",&a[i]);
	}
	quicksort(a,0,7);
	
	for(int j=0;j<7;j++)
	{
		printf("%d  ",a[j]);
	}
}


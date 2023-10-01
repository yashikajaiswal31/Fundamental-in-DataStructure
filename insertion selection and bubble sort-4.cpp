//Insertion selection and bubble

#include<stdio.h>
int main()
{
	printf("menu\n");
	printf(" 1.bubble\n");
	printf("2.insertion\n");
	printf("3.selection\n");
	printf("enter  your choice \n ");
	int choice;
	scanf("%d",&choice);
	int a[100];
	printf("enter the elements of the array\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	switch(choice)
	
	{
		case 1:
			printf("you chose bubble sort....\n");
			for(int i=0 ;i<4;i++)
			{
				for(int j=0 ;j<5-(i+1);j++)
				{
					if(a[j]>a[j+1])
					{
						int temp;
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
		
					}
				}
			}
			  printf("the sorted array is\n");
			 for(int i=0;i<5;i++)
	          {
		         printf("%d ",a[i]);
	           }
			
			break;
		case 2:
			printf("you chose insertion sort ....\n");
			for(int i=0;i<5;i++)
			{
				int key ;
				key=a[i];
				int k;
				k=i-1;
				while(k>=0 && a[k]>key)
				{
					a[k+1]=a[k];
					k=k-1;
				}
				a[k+1]=key;
			}
			printf("the sorted array is\n");
			 for(int i=0;i<5;i++)
	          {
		         printf("%d ",a[i]);
	           }
			break;
		case 3:
			printf("you chose selection sort....\n");
			
			for(int i=0 ;i<4;i++)
			{
			     int key=i;
				 for(int j=i+1;j<5;j++)
				 {
				 	if(a[j]<a[key])
				 	{
				 		key=j;
					 }
					 if(key!=i)
					 {
					 	int temp;
					 	temp=a[key];
					 	a[key]=a[i];
					 	a[i]=temp;
					 }
					 }	
			}
				printf("the sorted array is\n");
			 for(int i=0;i<5;i++)
	          {
		         printf("%d ",a[i]);
	           }
			break;
		default :
		    printf("enter the correct option \n");
		    break;
	   
	}
}


#include<stdio.h>
int main()
{
	printf("menu\n");
	printf("1.linear search\n");
	printf("2.binary search\n");
	printf("\n enter your choice \n");
	int c;
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				int a[100];
				printf("enter the elements of the array\n");
				for(int i=0 ;i<5;i++)
				{
					scanf("%d",&a[i]);
				}
				printf("print the array\n");
				for(int i=0 ;i<5;i++)
				{
					printf("%d   ",a[i]);
				}
				
				int num;
				printf("\nenter the number to be searched from the array\n");
				scanf("%d",&num);
				for(int i=0 ;i<5;i++)
				{
				    if(a[i]==num)
				    {
					
				    printf("the no found at %d index\n",i);
				    return 0;
				}
				}
				printf("the element is not there in the array\n");
				break;
			}
			
		case 2:
			{
				//binary search
				int b[100];
				printf("enter the elements of the sorted array\n");
					for(int i=0 ;i<5;i++)
				{
					scanf("%d",&b[i]);
				}
				int s=0,e=4,mid ,ele;//s=start ,e=end ele=element to be searched
				printf("enter the element to be searched\n");
				scanf("%d",&ele);
				while(s<=e)
				
				{
				
				    mid =(s+e)/2;
					if(b[mid]==ele)
					{
						printf("the number found at %d index",mid);
						return 0;
						}	
					else if (b[mid]>ele)
					{
						e=mid-1;
					}
					else if (b[mid]<ele)
					{
						s=mid+1;
					}
				}
				
				
			}
	}
}


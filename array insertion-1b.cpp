//ARRAY INSERTION-
#include<stdio.h>
int main(){
	int x;
	printf("Input your array first.\n\n");
	printf("Enter the length of your array:\n");
				scanf("%d",&x);
				int arr[30];
				for (int i=0;i<x;i++){
					printf("Enter  the elements: %d\n",i+1);
					scanf("%d",&arr[i]);
				}
				printf("The array formed will be:\n");
				for(int i=0;i<x;i++){
					printf("%d ",arr[i]);
				}
	int opt;
	printf("\nMenu.\n");
	printf("-------------------------------\n");
	printf("1. Insertion at a position in the array.\n");
	printf("2. Insertion at beginning.\n");
	printf("3. Insertion at end.\n");
	printf("4. Delete by position.\n");
	printf("5. Delete by element.\n");
	printf("6. searching by position.\n");
	printf("7. search by element.\n");
	printf("-------------------------------\n");
	printf("Enter your choice.\n");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			{
				int position,element;
				
				printf("\nEnter the position where insertion takes place:\n");
				scanf("%d",&position);
				printf("Enter the element to be inserted:\n");
				scanf("%d",&element);
				for(int i=x-1;i>=position-1;i--){
					arr[i+1]=arr[i];
				}
				arr[position-1]=element;
				printf("The new array is:\n");
				for(int i=0;i<=x;i++){
					printf("%d ",arr[i]);
				}
			}
			break;
		case 2:
			{
				int element;
				printf("Enter the element to be inserted in the beginning:\n");
				scanf("%d",&element);
				for(int i=x-1;i>=0;i--){
					arr[i+1]=arr[i];
				}
				arr[0]=element;
				printf("The array after insertion is:\n");
				for(int i=0;i<=x;i++){
					printf("%d ",arr[i]);
				}
			}
			break;
		case 3:
			{
			
			int element;
			printf("Enter the element to be inserted in the end:\n");
			scanf("%d",&element);
			arr[x]=element;
			printf("The array after insertion is:\n");
			for(int i=0;i<=x;i++){
				printf("%d ",arr[i]);
			}
		}
		break;
		case 4:
			{
				int position;
				printf("Enter the position to be deleted:\n");
				scanf("%d",&position);
				if (position-1>x-1)
				
					printf("Range is out of index:");
				else{
				for(int i=position-1;i<x-1;i++){
					arr[i]=arr[i+1];
				}
			}
				printf("The array after deletion is:\n");
				for(int i=0;i<x-1;i++){
					printf("%d ",arr[i]);
				}
			}
			break;
		case 5:
			{
				int element,position;
				printf("Enter element you want to delete:\n");
				scanf("%d",&element);
				for(int i=0;i<x;i++){
					if(arr[i]==element){
						position=i;
					}
				}
				for(int i=position;i<x-1;i++){
					arr[i]=arr[i+1];
				}
				printf("The array after deletion is:\n");
				for(int i=0;i<x-1;i++){
					printf("%d ",arr[i]);
				}
				
			}
			break;
		case 6:
			{
				int position,element;
				printf("Enter the position you want to search:\n");
				scanf("%d",&position);
				element=arr[position-1];
				printf("Element %d is present in position %d\n",element,position);
				
			}
			break;
		case 7:
			{
				int element;
				printf("Enter the element to be searched:\n");
				scanf("%d",&element);
				for(int i=0;i<x;i++){
					if(arr[i]==element){
						printf("Element %d is present at position %d\n",element,i+1);
					}
				}
			}
			break;
		default:
			printf("Wrong Input.");
	}
}

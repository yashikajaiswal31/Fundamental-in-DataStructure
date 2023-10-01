//array sum average reverse-

#include<stdio.h>
int main(){
	int opt;
	printf("Menu\n");
	printf("1.Press 1 for sum of digits.\n");
	printf("2. Press 2 for reverse of digits.\n");
	printf("3.Press 3 for average of numbers.\n");
	printf("4.Press 4 for triangular numbers.\n");
	printf("5.Press 5 for Numbers to word.\n");
	printf("enter your choice.\n");
	scanf("%d",&opt);
	switch (opt){
		case 1:
			{
			int n;
			printf("Enter number:\n");
	        scanf("%d",&n);
			int sum=0;
			while(n>0){
				int rem=n%10;
				sum=sum+rem;
				n=n/10;
			}
			printf("sum of digits is: %d\n",sum);
			break;
		} 
		case 2:
			{
			int n;
			printf("enter number:\n");
	        scanf("%d",&n);
			int r=0;
			while(n>0){
				int rem=n%10;
				r=r*10+rem;
				n=n/10;
			}
			printf("reverse of number is: %d\n",r);
			break;
		}
		case 3:
			{
			int n;
	        printf("enter number of terms:\n");
			scanf("%d",&n);
			int sum=0;
			for(int i=0;i<n;i++)
			{
				int num;
				printf("Enter number:\n");
				scanf("%d",&num);
				sum=sum+num;
			}
			int avg=sum/n;
			printf("average is:%d",avg);
			break;
		}
		case 4:
			{
			
			int n;
			printf("enter number:\n");
			scanf("%d",&n);
			
			for(int i=1;i<=n;i++){   
				for(int j=1;j<=n-i;j++){   
					printf(" ");   
			    }   
				for(int k=1;k<=i;k++){   
					printf("%d",k);   
			    }   
				for(int l=i-1;l>=1;l--){   
					printf("%d",l);   
			    }   
				printf("\n");   
			    }
			}
			case 5:
				{
					int n;
					int rev=0;
					printf("enter number: ");
					scanf("%d",&n);
					while (n>0){
						int rem=n%10;
						rev=rev*10+rem;
						n=n/10;
					}
					while (rev>0){
						int r=rev%10;
						if (r==0){
							printf("zero ");
						}
						else if(r==1){
							printf("one ");
						}
						else if(r==2){
							printf("two ");
						}
						else if(r==3){
							printf("three ");
						}
						else if(r==4){
							printf("four ");
						}
						else if(r==5){
							printf("five ");
						}
						else if(r==6){
							printf("six ");
						}
						else if(r==7){
							printf("seven ");
						}
						else if(r==8){
							printf("eight ");
						}
						else if(r==9){
							printf("nine ");
						}
						rev=rev/10;
				
				}
			}
			break;
			default:
				printf("invalid input");
	}
}


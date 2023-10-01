//Polynomial

#include<stdio.h>
#include<string.h>
int main(){
	int degree1,coff1[20]={0},degree2,coff2[20]={0};
	
	printf("Enter the degree of polynomial: ");
	scanf("%d",&degree1);
	for(int i=0;i<=degree1;i++){
		printf("Enter coefficient of x^%d: ",i);
		scanf("%d",&coff1[i]);
	}
	
	printf("So, the polynomial of degree %d formed is:-\n",degree1);
	for(int i=degree1;i>=0;i--){
		if(i!=0){
			printf("(%dx^%d) ",coff1[i],i);
		}
		else{
			printf("(%d)",coff1[i]);
		}
		if(i>0){
			printf("+ ");
		}
	}
	printf("\n\nEntries of 2nd polynomial: \n\n");
	printf("Enter the degree of polynomial: ");
	scanf("%d",&degree2);
	for(int i=0;i<=degree2;i++){
		printf("Enter coefficient of x^%d: ",i);
		scanf("%d",&coff2[i]);
	}
	printf("So, the polynomial of degree %d formed is:-\n",degree2);
	for(int i=degree2;i>=0;i--){
		if(i!=0){
			printf("(%dx^%d) ",coff2[i],i);
		}
		else{
			printf("(%d)",coff2[i]);
		}
		if(i>0){
			printf("+ ");
		}
	}
	int ch;
	printf("\n\n");
	printf("Menu\n");
	printf("-------------------------------------\n");
	printf("Press 1 for addition.\n");
	printf("Press 2 for subtraction.\n");
	printf("Press 3 for multiplication.\n");
	printf("-------------------------------------\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			{
				int sum[30]={0};int deg;
				printf("Addition of the two polynomial:-\n");
				if(degree1>=degree2){
					deg=degree1;
				}
				else{
					deg=degree2;
				}
				for(int i=0;i<=deg;i++){
					sum[i]=coff1[i]+coff2[i];
				}
				for(int i=deg;i>=0;i--){
					if(i!=0){
						printf("(%dx^%d) ",sum[i],i);
					}
					else{
						printf("(%d)",sum[i]);
					}
					if(i>0){
						printf("+ ");
					}
				}
	
			}
			printf("\nThank you!!!");
			break;
		case 2:
			{
				int diff[30]={0};int deg;
				printf("Subtraction of the two polynomial:-\n");
				if(degree1>=degree2){
					deg=degree1;
				}
				else{
					deg=degree2;
				}
				for(int i=0;i<=deg;i++){
					diff[i]=coff1[i]-coff2[i];
				}
				for(int i=deg;i>=0;i--){
					if(i!=0){
						printf("(%dx^%d) ",diff[i],i);	
					}
					else{
						printf("(%d)",diff[i]);
					}
					if(i>0){
						printf("+ ");
					}
				}	
			}
			printf("\nThank you!!!");
			break;
		case 3:
			{
				printf("Product of the two polynomial is : \n");
				int mul[30]={0};
				for(int i=0;i<=degree1;i++){
					for(int j=0;j<=degree2;j++){
						mul[i+j]=mul[i+j]+(coff1[i]*coff2[j]);
					}
				}
				int deg;
				deg=degree1+degree2;
				for(int i=deg;i>=0;i--){
					if(i!=0){
						printf("(%dx^%d) ",mul[i],i);
					}
					else{
						printf("(%d)",mul[i]);
					}
					if(i>0){
						printf("+ ");
					}
				}
			}
			printf("\nThank you!!!!");
			break;
			default:
				printf("Invalid input:");
	}
	
	
	
	return 0;
	
}


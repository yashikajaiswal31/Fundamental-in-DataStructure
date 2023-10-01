#include<stdio.h>
int main()
{
	int ch;
	printf("Menu\n");
	printf("-------------------------\n");
	printf("1 for addition of matrices.\n");
	printf("2 for subtraction of matrices.\n");
	printf("3 for multiplication of matrices.\n");
	printf("4 to find greatest number from each row.\n");
	printf("5 for addition of major diagonal elements.\n");
	printf("6 for transpose of matrix.\n");
	printf("7 for sparse matrix representation of given matrix.\n");
	printf("8 for addition of 2 sparse matrices.\n");
	printf("9 for subtraction of 2 sparse matrices.\n");
	printf("10 for transpose of sparse matrix.\n");
	printf("-------------------------\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			{
				printf("Input of matrix.\n\n");
				int r1,r2,c1,c2;
				printf("Enter number of rows of 1st matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of 1st matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of 1st matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n1st Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
					}
					printf("\n");
				}
				printf("Enter number of rows of 2nd matrix: ");
				scanf("%d",&r2);
				printf("Enter number of columns of 2nd matrix: ");
				scanf("%d",&c2);
				int arr2[r2][c2];
				printf("Enter elements of 2nd matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr2[i][j]);
					}
				}
				printf("\n2nd Matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("%d\t",arr2[i][j]);
					}
					printf("\n");
				}
				if(r1==r2&&c1==c2){
					int res[r1][c1];
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							res[i][j]=arr1[i][j]+arr2[i][j];
						}
					}
					printf("\n\nArray after addition is \n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							printf("%d\t",res[i][j]);
						}
						printf("\n");
					}		
				}
				else{
					printf("Addition is not possible.");
				}
			}
			break;
		case 2:
			{
				printf("Input of matrices.\n\n");
				int r1,r2,c1,c2;
				printf("Enter number of rows of 1st matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of 1st matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of 1st matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n1st Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
					}
					printf("\n");
				}
				printf("Enter number of rows of 2nd matrix: ");
				scanf("%d",&r2);
				printf("Enter number of columns of 2nd matrix: ");
				scanf("%d",&c2);
				int arr2[r2][c2];
				printf("Enter elements of 2nd matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr2[i][j]);
					}
				}
				printf("\n2nd Matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("%d\t",arr2[i][j]);
					}
					printf("\n");
				}
			if(r1==r2&&c1==c2){
					int res[r1][c1];
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							res[i][j]=arr1[i][j]-arr2[i][j];
						}
					}
					printf("Array after subtraction is- \n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							printf("%d\t",res[i][j]);
						}
						printf("\n");
					}		
				}
				else{
					printf("Subtraction is not possible.");
				}	
			}
			break;
		case 3:
			{
				printf("Input of matrices.\n\n");
				int r1,r2,c1,c2;
				printf("Enter number of rows of 1st matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of 1st matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of 1st matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n1st Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
					}
					printf("\n");
				}
				printf("Enter number of rows of 2nd matrix: ");
				scanf("%d",&r2);
				printf("Enter number of columns of 2nd matrix: ");
				scanf("%d",&c2);
				int arr2[r2][c2];
				printf("Enter elements of 2nd matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr2[i][j]);
					}
				}
				printf("\n2nd Matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("%d\t",arr2[i][j]);
					}
					printf("\n");
				}
				if(c1==r2){
					int res[r1][c2];
					for(int i=0;i<r1;i++){
						for(int j=0;j<c2;j++){
							res[i][j]=0;
							for(int k=0;k<c2;k++){
								res[i][j]=res[i][j]+arr1[i][k]*arr2[k][j];
							}
						}
					}
					printf("Array after multiplication-\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c2;j++){
							printf("%d\t",res[i][j]);
						}
						printf("\n");
					}
				}
				else
				printf("Multiplication is not possible.");
			}
			break;
		case 4:
			{
			printf("Input of matrix.\n\n");
			int r1,c1;
			printf("Enter number of rows of matrix: ");
			scanf("%d",&r1);
			printf("Enter number of columns of matrix: ");
			scanf("%d",&c1);
			int arr1[r1][c1];
			printf("Enter elements of matrix:\n");
			for(int i=0;i<r1;i++){
				for(int j=0;j<c1;j++){
					printf("Element [%d][%d]: ",i+1,j+1);
					scanf("%d",&arr1[i][j]);
				}
			}
			printf("\n Matrix:\n");
			for(int i=0;i<r1;i++){
				for(int j=0;j<c1;j++){
					printf("%d\t",arr1[i][j]);
				}
				printf("\n");
			}
				for(int i=0;i<r1;i++){
					int lar=-1000;
					for(int j=0;j<c1;j++){
						if(arr1[i][j]>lar){
							lar=arr1[i][j];
						}
					}
					printf("\nGreatest number from row %d is: %d\n",i+1,lar);
				}
				
			}
			break;
		case 5:
			{
				printf("Input of matrix.\n\n");
				int r1,c1;
				printf("Enter number of rows of matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
					}
					printf("\n");
				}
				int sum=0;
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						if(i==j){
							sum+=arr1[i][j];
						}
					}
				}
				printf("Sum of diagonal elements is: %d",sum);
			}
			break;
		case 6:
			{
				printf("Input of matrix.\n\n");
				int r1,c1;
				printf("Enter number of rows of matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
					}
					printf("\n");
				}
				printf("Transpose of matrix is:\n");
				int t1[c1][r1];
				for(int i=0;i<c1;i++){
					for(int j=0;j<r1;j++){
						t1[i][j]=arr1[j][i];
					}
				}
				for(int i=0;i<c1;i++){
					for(int j=0;j<r1;j++){
						printf("%d\t",t1[i][j]);
					}
					printf("\n");
				}	
			}
		
		break;
		case 7:
			{
				printf("Input of matrix.\n\n");
				int r1,c1,sum=0;
				printf("Enter number of rows of matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
						if(arr1[i][j]==0){
							sum+=1;
						}
					}
					printf("\n");
				}
				if(sum>(r1*c1)/2){
					printf("It is a sparse matrix.\n");
					printf("Sparse representaion of matrix:-\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							if(arr1[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,arr1[i][j]);
							}
						}
					}
				}
				else
				printf("It is not a Sparse matrix.");
			}
		
		break;
		case 8:
			{
				printf("Input of matrices.\n\n");
				int r1,r2,c1,c2,s1=0,s2=0;
				printf("Enter number of rows of 1st matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of 1st matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of 1st matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n1st Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
						if(arr1[i][j]==0){
							s1++;
						}
					}
					printf("\n");
				}
				
				printf("Enter number of rows of 2nd matrix: ");
				scanf("%d",&r2);
				printf("Enter number of columns of 2nd matrix: ");
				scanf("%d",&c2);
				int arr2[r2][c2];
				printf("Enter elements of 2nd matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr2[i][j]);
					}
				}
				printf("\n2nd Matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("%d\t",arr2[i][j]);
						if(arr2[i][j]==0)
						s2++;
					}
					printf("\n");
				}
				if(s1>(r1*c1)/2){
					printf("Matrix 1 is a Sparse matrix.\n");
					printf("Sparse representation of matrix 1:-\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							if(arr1[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,arr1[i][j]);
							}
						}
					}
				}
				else
				printf("Matrix 1 is not a Sparse matrix.\n");
				if(s2>(r2*c2)/2){
					printf("Matrix 2 is a Sparse matrix.\n");
					printf("Sparse representation of matrix 2:-\n");
					for(int i=0;i<r2;i++){
						for(int j=0;j<c2;j++){
							if(arr2[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,arr2[i][j]);
							}
						}
					}
				}
				else
				printf("Matrix 2 is not a Sparse matrix.\n");
				if(s1>(r1*c1)/2 && s2>(r2*c2)/2){
					int res[r1][c1];
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							res[i][j]=arr1[i][j]+arr2[i][j];
						}
					}
					printf("Sum of matrix 1 and matrix 2 is:\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							printf("%d\t",res[i][j]);
						}
						printf("\n");
					}
					printf("Sparse representation of the addition matrix:-\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							if(res[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,res[i][j]);
							}
						}
					}
				}
				else
				printf("Addition not possible as matrices are not Sparse matices.\n");
			}
		break;
		case 9:
			{
			printf("Input of matrices.\n\n");
				int r1,r2,c1,c2,s1=0,s2=0;
				printf("Enter number of rows of 1st matrix: ");
				scanf("%d",&r1);
				printf("Enter number of columns of 1st matrix: ");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of 1st matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n1st Matrix:\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
						if(arr1[i][j]==0)
						s1++;
					}
					printf("\n");
				}
				
				printf("Enter number of rows of 2nd matrix: ");
				scanf("%d",&r2);
				printf("Enter number of columns of 2nd matrix: ");
				scanf("%d",&c2);
				int arr2[r2][c2];
				printf("Enter elements of 2nd matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr2[i][j]);
					}
				}
				printf("\n2nd Matrix:\n");
				for(int i=0;i<r2;i++){
					for(int j=0;j<c2;j++){
						printf("%d\t",arr2[i][j]);
						if(arr2[i][j]==0)
						s2++;
					}
					printf("\n");
				}
				if(s1>(r1*c1)/2){
					printf("Matrix 1 is a Sparse matrix.\n");
					printf("Sparse representation of matrix 1:-\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							if(arr1[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,arr1[i][j]);
							}
						}
					}
				}
				else
				printf("Matrix 1 is not a Sparse matrix.\n");
				if(s2>(r2*c2)/2){
					printf("Matrix 2 is a Sparse matrix.\n");
					printf("Sparse representation of matrix 2:-\n");
					for(int i=0;i<r2;i++){
						for(int j=0;j<c2;j++){
							if(arr2[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,arr2[i][j]);
							}
						}
					}
				}
				else
				printf("Matrix 2 is not a Sparse matrix.\n");
				if(s1>(r1*c1)/2 && s2>(r2*c2)/2){
					int res[r1][c1];
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							res[i][j]=arr1[i][j]-arr2[i][j];
						}
					}
					printf("Difference of matrix 1 and matrix 2 is:\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							printf("%d\t",res[i][j]);
						}
						printf("\n");
					}
					printf("Sparse representation of the Subtraction matrix:-\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							if(res[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,res[i][j]);
							}
						}
					}
				}
				else
				printf("Subtraction not possible as matrices are not Sparse matices.\n");	
			}
			break;
		case 10:
			{
				int r1,c1,s=0;
				printf("Enter number of rows of matrix: \n");
				scanf("%d",&r1);
				printf("Enter number of columns of matrix: \n");
				scanf("%d",&c1);
				int arr1[r1][c1];
				printf("Enter elements of matrix.\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("Element [%d][%d]: ",i+1,j+1);
						scanf("%d",&arr1[i][j]);
					}
	
				}
				printf("\nMatrix\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						printf("%d\t",arr1[i][j]);
						if(arr1[i][j]==0){
							s++;
						}
					}
					printf("\n");
				}
				if(s>(r1*c1)/2){
					printf("It is a Sparse matrix:\n");
					printf("Sparse representation of the matrix is:-\n");
					for(int i=0;i<r1;i++){
						for(int j=0;j<c1;j++){
							if(arr1[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,arr1[i][j]);
							}
						}
					}
					printf("Transpose of matrix is:-\n");
					int t[c1][r1];
					for(int i=0;i<c1;i++){
						for(int j=0;j<r1;j++){
							t[i][j]=arr1[j][i];
						}
					}
					for(int i=0;i<c1;i++){
						for(int j=0;j<r1;j++){
							printf("%d\t",t[i][j]);
						}
						printf("\n");
					}
					printf("Sparse representation of transpose matrix is:\n");
					for(int i=0;i<c1;i++){
						for(int j=0;j<r1;j++){
							if(t[i][j]!=0){
								printf("Row: %d, Column: %d, Value: %d\n",i+1,j+1,t[i][j]);
							}
						}
					}
				}
				else
				printf("The matrix is not a Sparse matrix.\n");
				
			}
			break;
		default:
			printf("Invalid input.");
	}
	return 0;
}


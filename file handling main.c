//FILE HANDLING-

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	int empno;
	char name[30];
	int basic;
};

int main()
{
	int count = 0;
	FILE * filePointer = NULL;
	
	filePointer = fopen("EMPLOYEE.dat", "r");
	
	struct employee emp[30];
	
	while(!feof(filePointer))
	{
		fscanf(filePointer,"%d %s %d\n",&emp[count].empno,emp[count].name,&emp[count].basic);
		count++;
	}
	
	printf("\nCurrent Records in File:\n\n");
	for(int i = 0;i < count; i++)
	{
		printf("%d\n%s\n%d\n\n",emp[i].empno,emp[i].name,emp[i].basic);
	}
	
	printf("\nMissing Employee Numbers in File:\n\n");
	for(int i = 0;i < count-1;i++)
	{
		int currentEmpNo = emp[i].empno;
		int nextEmpNo = emp[i+1].empno;
		if(currentEmpNo != nextEmpNo + 1)
		{
			printf("%d\n",nextEmpNo + 1 );
		}		
	}
	
	char names[50][30];
	
	char temp[30];
	
	for(int i = 0; i < count;i++)
	{
		strcpy(names[i],emp[i].name);
	}
	
	// Sorting names using bubble sort
	for(int i=0; i < count; i++)
	{
    	for(int j=0; j<count-1-i; j++)
		{
     		if(strcmp(names[j], names[j+1]) > 0) // names[j] is greater than names[j+1]
	  		{
        		//swap array[j] and array[j+1]
        		strcpy(temp, names[j]);
        		strcpy(names[j], names[j+1]);
        		strcpy(names[j+1], temp);
      		}
    	}
	}
	
	printf("\nThe names in alphabetical order are:\n\n");
	for(int i = 0; i < count; i++)
	{
		printf("%s\n",names[i]);
	}
	return 0;
}


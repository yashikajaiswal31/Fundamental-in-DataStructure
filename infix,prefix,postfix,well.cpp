//Infix,Postfix,Prefix,Well formandes

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

char poststack[MAX];
int evalstack[MAX];
int top = -1;

// Modules
void InfixToPostfix();
void InfixToPrefix();
void PostfixEval();
void ParenthesesEval();
// Helper functions
void PushPost(char);
char PopPost();
int GetPrec(char);
void PushEval(int);
int PopEval();
int EvalOp(char);


int main()
{
	int ch;
	char loop_ch = 'y';
	do
	{
		printf("\n\nStack Applications\n\n");
		printf("1. Infix to Postfix Expression Conversion\n");
		printf("2. Infix to Prefix Expression Conversion\n");
		printf("3. Postfix Expression Evaluation\n");
		printf("4. Well-Formedness of Parentheses\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				InfixToPostfix();
				break;
			
			case 3:
				PostfixEval();
				break;
			case 4:
				ParenthesesEval();
				break;
			default:
				printf("\nPlease enter a valic choice from 1 to 4!\n");
				break;
		}
		printf("\n\nWould you like to return to Main Menu (y/n): ");
		fflush(stdin);
		scanf("%c",&loop_ch);
	} while (loop_ch == 'y');
	return 0;
}

void InfixToPostfix()
{
	// i points to infix expression
	// j points to postfix expression
	int i=0,j=0;
	char ele;
	char expression[30];
	char output[30] = {}; 
	printf("\nEnter an expression here:\n");
	scanf("%s",&expression);
	printf("\nThe original expression is: %s",expression);
    
    while(expression[i] != '\0')
    {
        if(isalnum(expression[i])) // Check for operand
        {
            output[j] = expression[i];
            j++;
    	}
        else if(expression[i] == '(') // Opening bracket
        {
            PushPost(expression[i]);
    	}
        else if(expression[i] == ')') // Closing bracket
        {
            ele = PopPost();
			while (ele != '(') // Pop until opening bracket is found
            {
            	output[j] = ele;
				j++;
				ele = PopPost(); 
			} 
        }
        else
        {
            while(GetPrec(poststack[top]) >= GetPrec(expression[i])) // Check if operator in stack is higher or equal precedence than encountered operator
            {
                output[j] = PopPost();
                j++;
        	}
            PushPost(expression[i]);
        }
        i++;
    }
    
    while(top != -1) // Remaining elements in stack
    {
       output[j] = PopPost();
       j++;
    }
    // Print the postfix expression
    printf("\n\nThe postfix expression is: %s",output);
}



void PostfixEval()
{
	int i = 0;
	char expression[MAX];
	int element;
	printf("\nEnter a postfix expression here:\n");
	scanf("%s",&expression);
	while(expression[i] != '\0')
	{
		if(expression[i] >= '0' && expression[i] <= '9')
		{
			element = expression[i] - '0';
			PushEval(element);
		}
		else 
		{
			element = EvalOp(expression[i]);
			PushEval(element);
		}
		i++;
	}
	printf("\n\nResult of the postfix expression is: %d",PopEval());
}

void ParenthesesEval()
{
	int i,flag,ele;
	char expression[30];
	printf("\nEnter an expression (using brackets) here:\n");
	scanf("%s",&expression);
	for(i=0;i<strlen(expression);i++)
	{
		if(expression[i] == '[' || expression[i] == '(' || expression[i] == '{')
		{
			PushPost(expression[i]);
		}
		else if(expression[i] == ']' || expression[i] == ')' || expression[i] == '}')
		{
			if(top == -1) // Closing bracket has no opening bracket
			{
				flag = 0;
			}
			else
			{
				ele = PopPost();
				if(ele == '(' && (expression[i] == '}' && expression[i] == ']' ))
				{
					flag = 0;
				}
				else if(ele == '{' && (expression[i] == ')' && expression[i] == ']' ))
				{
					flag = 0;
				}
				else if(ele == '[' && (expression[i] == ')' && expression[i] == '}' ))
				{
					flag = 0;
				}
				else
				{
					flag++;
				}
			}
		}
	}
	if(top >= 0) // Opening bracket has no closing bracket
	{
		flag = 0;
	}
	if(!flag)
	{
		printf("\nThe expression is invalid...\n");
	}
	else
	{
		printf("\nThe expression is valid!\n");
	}
}

void PushPost(char ch)
{
	top++;
	poststack[top] = ch;
	
}

char PopPost()
{
	return(poststack[top--]);
}

int GetPrec(char ch)
{
	if(ch == '^')
	{
		return 3;
	}
	else if(ch == '*' || ch == '/')
	{
		return 2;
	}
	else if(ch == '+' || ch == '-')
	{
		return 1;
	}
	return 0;
}

void PushEval(int x)
{
	top++;
	evalstack[top] = x;
	
}

int PopEval()
{
	return(evalstack[top--]);
}

int EvalOp(char ch)
{
	int num1,num2,res;
	// Converting char data type to integer by subratcting ASCII value of 0
	num1 = PopEval();
	num2 = PopEval();
	switch(ch)
	{
		case '^':
			res = pow(num2,num1);
			break;
		case '*':
			res = num1 * num2;
			break;
		case '/':
			res = num2 / num1;
			break;
		case '+':
			res = num1 + num2;
			break;
		case '-':
			res = num2 - num1;
			break;
		default:
			break;
	}
	return res;
}




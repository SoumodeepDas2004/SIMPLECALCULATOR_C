///  Simple Calculator
// Using switch case
#include <stdio.h>
#include <stdlib.h>

//  code
int main()
{
	char ch;
	double a,b;
	while (1) {
		printf("ENTER AN OPERATOR (+, -, *, /), \n IF WANT TO EXIT PRESS x: \n");
		scanf(" %c", &ch);

		//  exit CONDITION
		if (ch == 'x')
			exit(0);
		printf("\n Enter two first and second operand:\n");
		scanf("%lf %lf", &a, &b);

		// Using switch case we will differentiate operations based on different operator

		switch (ch) {

		// For Addition
		case '+':
		     system("COLOR 0A");
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		// For Subtraction
		case '-':
		    system("COLOR 0A");
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

		// For Multiplication
		case '*':
		     system("COLOR 0A");
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

		// For Division
		case '/':
		     system("COLOR 0A");
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;

		// If operator doesn't match any case constant
		default:
		     system("COLOR 04");
			printf(
				"Error! please write a valid operator\n");
		}

		printf("\n");
	}
}

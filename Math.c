#include <stdio.h>
#include <stdlib.h>

int pow(int x,int n)
{
	if(n == 0)
	   return 1;
	if(x == 0)
	   return 0;
	return x*pow(x,n-1);
}

double negpow(int x,int n)
{
      //if n is negative make it positive
				  // - x - = + and 1 * a = a 	
     	n = ( n < 0 ) ? n *= -1 : n; 
	return 1.0/(double)pow(x,n);
}

double powZ(int x,int n)
{
	if(n < 0)
	   return negpow(x,n);
	if(n >= 0)
	   return pow(x,n);
	return -1.234567;
}

int min(int a, int b)
{
				return ( a < b )? a : b; // is a less than
				// b, return a otherwise b is smaller
				// return b 
}

int mean(int a , int b)
{
				return ( a + b ) / 2; 
}

int ListMean(int list[], int listLength)
{
				int loopCount = 0;
				int sum = 0;
				for(loopCount = 0; loopCount < listLength; ++loopCount)
				{
								sum += *list;
								++list;
								++loopCount;
				}
				return sum;
}

double sqrt(int x)
{
			
				double n  = 1;
				double nsquared = powZ((int)n, 2);
				while(x - nsquared > 0)
				{
								nsquared = powZ((int)n, 2);
								if( (int)(x - nsquared) == 0)
								{
												return n;
								}
								n+= 1;
				}
				
				return n;
}
								

int factorial(int n)
{
				if(n == 0)// 0! "zero factorial is 1" = 1
				{
								return 1;
				}
				return n*factorial(n-1);
}

double nPr(int n, int r)
{
				int denominator = factorial(n-r);
				if(denominator == 0)
				{
								return 0;
				}
				return n/(double)denominator;
}

double nCr(int n, int r)
{
				int denominator = factorial(n-r)*factorial(r);
				return factorial(n)/(double)denominator;
}

double binomialDistX(int N, int X, double p)
{
				return 1.1*N*X*p;
}

int  PromptCont()
{
				char cont = 'c';
				printf("Do you wish to continue ");
				printf("(y/n)?\n>>");
				scanf("%c",&cont);
				scanf("%c",&cont);
				if(cont == 'y' || cont == 'Y')
				{
								return 1;
				}
				return 0;
}

int DisplayMenu();

int FindRoots()
{
				system("clear");
				int x;
				printf("Enter a number: \n>>");
				scanf("%d",&x);
				while( x < 0)
				{
								printf("MATHS ERROR !!!dn");
								printf("Please try again!\n");					
								scanf("%d",&x);		
				}
				printf("Square root of  \n");
				printf("%d  = %.4f\n",x,sqrt(x));
				
				if(PromptCont() == 1)
				{
								FindRoots();
				}
				else
				{
								DisplayMenu();
				}
				return 0;
}

int  DisplayMenu()
{
    system("clear");
				int option = 0;
				printf("1) Find Square roots of n\n");
				printf("2) Exit.\n");
				scanf("%d",&option);
				if(option == 1)
				{
								FindRoots();
				}
				if(option == 2)
				{
								printf("Exiting...\n");
								return 0;
				}
				return 0;
}

int main()
{
			DisplayMenu();			
				return 0;
}

#include<stdio.h>
int calculatelcm(int x , int y);

int main()
{
	int N1 , N2 , lcm;
	
	printf("Enter the first number: ");
	scanf("%d",&N1);
	
	printf("Enter the second number: ");
	scanf("%d",&N2);
	
	if(N1>N2)
	lcm = calculatelcm(N2, N1);
	else 
	lcm = calculatelcm(N1, N2);
	printf(" The LCM of %d and %d :  %d", N1, N2, lcm);
	return 0;
}
int calculatelcm(int x , int y) 
{
	static int i = 0;
	i = i + y;
	
	 if((i % x == 0) && (i % y == 0))
    {
        return i;
    }
    else
    {
        calculatelcm(x, y);
    }
	
}

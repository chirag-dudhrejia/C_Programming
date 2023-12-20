#include <stdio.h>
int main() 
{	
	int a[] = {10,12,6,7,2};

	int i, *p;
	p = a+4;

	for (i = 0; i < 5; i++)
	{
		printf("%d ",p[-i]);
	}
	

  	return 0;
}
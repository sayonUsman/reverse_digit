#include <stdio.h>

int main()
{
	int digit;
	
	int length;

	int remainder = 0;

	int sum = 0;

	int index = 1;
	
	printf("Please enter the length(maximum 9) of digit:\n");
	
	scanf("%d", &length);
	
	printf("Please enter the digit\n");
	
	scanf("%d", &digit);
	
	printf("The reverse digit is ");	

	while (index <= length)
	{
		remainder = digit % 10;

		digit = digit / 10;
		
		printf("%d", remainder);

		index++;
	}
	
	printf("\n");
	
	return 0;
}

#include<stdio.h>
void main()
{
	int total_numbers, number, even[10], odd[10], j = 0, k = 0;
	printf("Enter the number of numbers to be checked : ");
	scanf("%d" , &total_numbers);
	for(int i = 0 ; i < total_numbers ; i++)
	{
		scanf("%d" , &number);
		if (number % 2 == 0)
		{
			even[j] = number;
			j = j + 1;
		}
		else
		{
			odd[k] = number;
			k = k + 1;
		}
	}
	printf("Even : ");
	for (int i = 0; i < j; i++)
	{
		printf("%d ", even[i]);	
	}
	printf("\nOdd : ");
	for (int i = 0; i < k; i++)
	{
		printf("%d " , odd[i]);
	}
}
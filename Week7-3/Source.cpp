#include<stdio.h>
int main()
{
	int Num, b,d=100;
	char Text;
	printf("Enter Number : ");
	scanf_s("%d", &Num);
	if (Num == 8780)
	{
		for (b = 1;b < 10;b++)
		{
			for (Text = 1;Text < b;Text++)
			{
				printf(" I LOVE YOU");
			}
			printf("\n");
		}
	}
	else
	{
		printf("END!!!");
	}
}
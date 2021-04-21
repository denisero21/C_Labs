
#include<stdio.h>
#include<string.h>
#include<conio.h>

int StoI(int n, char *str);

int main(void)
{
	char string[10];

	scanf("%s", &string);

	int n = strlen(string);

	printf("%d", StoI(n, string));

	getch();
}

int StoI(int n, char *str)
{
	if (n == 1)
	{
		return *str - 48;
	}
	else
	{
		return (10 * StoI(n-1, str) + str[n-1] - 48);
	}
}


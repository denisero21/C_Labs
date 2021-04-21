#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int StoI(unsigned int n, char *str);
int Slen(char *str);

int main()
{
	int Summ = 0, j = 0, Am[20], Pr[20], a[20], k = 0;
	char RealDate[10];

	FILE *text;
	text = fopen("text.txt", "r");

	char String[40][20], list[40];

	while(!feof(text))
	{
		fscanf(text, "%s",  String[j]);
		j++;
	}

	for (int i = 0; i < j; i += 4) {
		printf("%s %s %s %s\n", String[i], String[i+1], String[i+2], String[i+3]);
	}

	printf("\nEnter the real date please: ");
	scanf("%s", RealDate);

	for (int i = 1; i < j; i += 4)
	{
		if( (RealDate[6] >= String[i][6] && RealDate[7] >= String[i][7]) || RealDate[6] > String[i][6] )
		{
			if( (RealDate[8] >= String[i][8] && RealDate[9] >= String[i][9]) || (RealDate[8] > String[i][8]) || ((RealDate[6] > String[i][6]) && RealDate[8] <= String[i][8] && RealDate[9] <= String[i][8]) )
			{
				if( (RealDate[3] >= String[i][3] && RealDate[4] >= String[i][4]) || (RealDate[3] > String[i][3] && RealDate[4] < String[i][4]) || ((RealDate[6] > String[i][6] || (RealDate[8] > String[i][8]) || (RealDate[8] >= String[i][8] && RealDate[9] > String[i][9])) && RealDate[3] <= String[i][3] && RealDate[4] <= String[i][4]) )
				{
					if( (RealDate[0] >= String[i][0] && RealDate[1] >= String[i][1]) || (RealDate[0] > String[i][0] && RealDate[1] <= String[i][1]) || (((RealDate[3] > String[i][3] && RealDate[4] < String[i][4]) || (RealDate[3] == String[i][3] && RealDate[4] > String[i][4]) || (RealDate[3] > String[i][3] && RealDate[4] > String[i][4]) || (RealDate[8] >= String[i][8] && RealDate[9] > String[i][9]) || (RealDate[8] > String[i][8]) ) && RealDate[0] <= String[i][0] && RealDate[1] <= String[i][1]) )
					{

						a[k] = i-1;
						Am[k] = StoI(Slen(String[i+1]), String[i+1]);
						Pr[k] = StoI(Slen(String[i+2]), String[i+2]);
						k++;
					}
				}
			}
		}
	}

	printf("Expired:\n");

	for (int i = 0; i < k; i++)
	{
		printf("%s %d %d\n", String[a[i]], Am[i], Pr[i]);
	}

	for (int i = 0; i < k; i++)
	{
		Summ += Am[i]*Pr[i];
	}

	printf("Total damage: %d", Summ);

	fclose(text);
	getch();
	return 0;
}

int StoI(unsigned int n, char *str)
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

int Slen(char *str)
{
	int count = 0;
	while(str[count] != '\0')
	{
		count++;
	}

	return count;
}

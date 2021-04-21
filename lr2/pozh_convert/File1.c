#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include<conio.h>
#include<windows.h>

void Info();
float Input(float x);
void Russian(float x);
void English(float x);
float Units(float x);
float Output(float x);
void Information();

int _tmain(int argc, _TCHAR* argv[])
{
	system("chcp 1251>nul");
	float x, ten, ten1;
	char ans[3];
	char number;
	printf("����� ���������� � ��������� �������.\n\n");
	NewAttempt: printf("������� ������?(��/���)\n");
	scanf("%s", ans);
	if((ans[0] == '�' || ans[0] == '�') && (ans[1] == '�' || ans[1] == '�'))
	{
		while(1)
		{
			Info();
			number = getch();
			if (number == '1')
			{
				system("cls");
				x = Input(x);
				ten = Units(x);
				getch();
			}

			if (number == '2')
			{
				system("cls");
				Russian(x*ten);
				getch();
			}

			if (number == '3')
			{
				system("cls");
				English(x*ten);
				getch();
			}

			if (number == '4')
			{
				system("cls");
				printf("������� ��������, ������� �� ������ �� ��������.");
				ten1 = Output(x);
				printf("%f", ten*x/ten1);
				getch();
			}

			if (number == '5')
			{
				system("cls");
				Information();
				getch();
			}

			if (number == '6')
			{
				return 0;
			}
		}
	}
	else
	{
		if((ans[0] == '�' || ans[0] == '�') && (ans[1] == '�' || ans[1] == '�') && (ans[2] == '�' || ans[2] == '�'))
		{
			booll: printf("��� ������ �� ��������� ������� 0, ��� ����������� � ������ ���������� ������� 1\n");

			int ans1;

			ans1 = getch();
			if (ans1 == '0')
			{
				return 0;
			}
			else
			{
				if(ans1 == '1')
				{
					goto NewAttempt;
				}
				else
				{
					printf("������! ����� ������ 0 ��� 1.\n");
					goto booll;
                }
			}
		}
		else
		{
			printf("��������� ����. ��� ����� ������ ��/���.\n");
			goto NewAttempt;
		}
	
	}
}

void Info()
{
	system("cls");

	printf("1. ���� �������� �����.");
	printf("\n2. ������� ����� � ������� ������������ �������.");
	printf("\n3. ������� ����� � ���������� ������������ �������.");
	printf("\n4. ����� ������, ��������������� ��������� �������� � ����������, ������, �����������, �����������");
	printf("\n5. ���������� � ������ � ������ ���������.");
	printf("\n6. ����� �� ���������.\n");
}

float Input(float x)
{
	system("cls");

	printf("������� �����:\n");
	scanf("%f", &x);

	return x;

}

void Russian(float x)
{
	system("cls");

	const float verst = 500*3*16*44.45/1000;
	const float arsh = 16*44.45/1000;
	const float sazh = 3*16*44.45/1000;
	const float versh = 44.45/1000;
	printf("%.2f(�) �����:\n", x);
	printf("1. %f �����(�, �).", x/verst);
	printf("\n2. %f �����(�, �).", x/arsh);
	printf("\n3. %f ������(��, �).", x/sazh);
	printf("\n4. %f ������(�, ��).", x/versh);
}

void English(float x)
{
	system("cls");

	const float mile = 1763*12*3*2.54/100 ;
	const float yard = 3*12*2.54/100;
	const float foot = 12*2.54/100;
	const float inch = 2.54/100;
	printf("%.2f(�) �����:\n", x);
	printf("1. %f ����(�, ��).", x/mile);
	printf("\n2. %f ���(�, ��).", x/yard);
	printf("\n3. %f ����(��, �).", x/foot);
	printf("\n4. %f ����(�, ��).", x/inch);
}

float Units(float x)
{
	printf("\n�������� �������� �������� ��������:\n");

	float ten;

	ten = Output(x);

	return ten;
}

float Output(float x)
{

	printf("\n1. ���������.");
	printf("\n2. �����.");
	printf("\n3. ����������.");
	printf("\n4. ����������.\n");

	int s;

	scanf("%d", &s);

	float ten = 1;

	switch(s)
	{
		case 1: ten *= 1000; break;
		case 2: ten *= 1; break;
		case 3: ten /= 100; break;
		case 4: ten /= 1000; break;
	}

	return ten;
}


void Information()
{
	system("cls");
	printf("��������� ���������� �������� ����� �� ������ �99.");
}

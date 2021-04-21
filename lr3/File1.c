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
	printf("Добро пожаловать в конвентор величин.\n\n");
	NewAttempt: printf("Желаете начать?(Да/Нет)\n");
	scanf("%s", ans);
	if((ans[0] == 'д' || ans[0] == 'Д') && (ans[1] == 'а' || ans[1] == 'А'))
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
				printf("Введите величину, которую вы хотели бы получить.");
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
		if((ans[0] == 'Н' || ans[0] == 'н') && (ans[1] == 'е' || ans[1] == 'Е') && (ans[2] == 'Т' || ans[2] == 'т'))
		{
			booll: printf("Для выхода из программы введите 0, для возвращения к опциям конвертора введите 1\n");

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
					printf("ОШИБКА! Нужно ввести 0 или 1.\n");
					goto booll;
                }
			}
		}
		else
		{
			printf("Ошибочный ввод. Вам нужно ввести Да/Нет.\n");
			goto NewAttempt;
		}
	
	}
}

void Info()
{
	system("cls");

	printf("1. Ввод значения длины.");
	printf("\n2. Перевод длины в русские традиционные единицы.");
	printf("\n3. Перевод длины в английские традиционные единицы.");
	printf("\n4. Вывод отчета, представляющего введенное значение в километрах, метрах, сантиметрах, миллиметрах");
	printf("\n5. Информация о версии и авторе программы.");
	printf("\n6. Выход из программы.\n");
}

float Input(float x)
{
	system("cls");

	printf("Введите число:\n");
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
	printf("%.2f(м) равно:\n", x);
	printf("1. %f Верст(а, ы).", x/verst);
	printf("\n2. %f Аршин(а, ы).", x/arsh);
	printf("\n3. %f Сажень(ей, я).", x/sazh);
	printf("\n4. %f Вершок(а, ов).", x/versh);
}

void English(float x)
{
	system("cls");

	const float mile = 1763*12*3*2.54/100 ;
	const float yard = 3*12*2.54/100;
	const float foot = 12*2.54/100;
	const float inch = 2.54/100;
	printf("%.2f(м) равно:\n", x);
	printf("1. %f Миль(я, ей).", x/mile);
	printf("\n2. %f Ярд(а, ов).", x/yard);
	printf("\n3. %f Футы(ов, а).", x/foot);
	printf("\n4. %f Дюйм(а, ов).", x/inch);
}

float Units(float x)
{
	printf("\nВыберите значение вводимой величины:\n");

	float ten;

	ten = Output(x);

	return ten;
}

float Output(float x)
{

	printf("\n1. Километры.");
	printf("\n2. Метры.");
	printf("\n3. Сантиметры.");
	printf("\n4. Миллиметры.\n");

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
	printf("Программу разработал Ерощенко Денис на версии С99.");
}

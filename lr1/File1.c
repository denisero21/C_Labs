#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#include<math.h>
#include<conio.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int main()
{
    float x, x1;

	printf("Please enter the numner: ");
	scanf("%f", &x);
	


	x1 = x - floor(x);


	x1 = round(x1*1000)/10;
	x1 = round(x1);

	int ten, cent;

	ten = (int)x;
	cent = (int)x1;

	if (cent >= 100)
	{
		ten++;
		cent = 0;
	}

	printf("\n%d dollars %d cents", ten, cent);

	getch();
	return 0;
}

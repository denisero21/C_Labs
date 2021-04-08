#include <stdio.h>
#include <conio.h>
#include <malloc.h>

int main()
{
	int *a, n, *LengthOfArifm, *LengthOfGeom, AnsArifm = 1, AnsGeom = 1;

	printf("Please enter the number of elements: ");
	scanf("%d", &n);

	a = (int*)malloc(n * sizeof(int));
	LengthOfArifm = (int*)malloc(n * sizeof(int));
	LengthOfGeom = (int*)malloc(n * sizeof(int));

	LengthOfArifm[1] = 2;
	LengthOfGeom[1] = 2;

    for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
    }

	for(int i = 2; i < n; i++)
    {
        if (a[i] - a[i - 1] == a[i - 1] - a[i - 2])
		{
			LengthOfArifm[i] = LengthOfArifm[i - 1] + 1;
        }
        else
		{
			LengthOfArifm[i] = 2;
        }
        if (a[i - 1] * a[i - 1] == a[i] * a[i - 2])
		{
			LengthOfGeom[i] = LengthOfGeom[i - 1] + 1;
        }
        else
		{
			LengthOfGeom[i] = 2;
		}
		if (LengthOfArifm[i] > LengthOfArifm[AnsArifm])  AnsArifm = i;
		if (LengthOfGeom[i] > LengthOfGeom[AnsGeom]) AnsGeom = i;
    }
	if (LengthOfArifm[AnsArifm] > LengthOfGeom[AnsGeom])
    {
		printf("The longest arithmetic sequence: ");
		for(int i = AnsArifm - LengthOfArifm[AnsArifm] + 1; i <= AnsArifm; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\nLength: %d", LengthOfArifm[AnsArifm]);
	}
	else if (LengthOfArifm[AnsArifm] < LengthOfGeom[AnsGeom])
	{
		printf("The longest geometric sequence: ");
		for(int i = AnsGeom - LengthOfGeom[AnsGeom] + 1; i <= AnsGeom; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\nLength: %d", LengthOfGeom[AnsGeom]);
	}
	else
	{
		printf("The sequences are equally.\nThe longest arithmetic sequence: ");
		for(int i = AnsArifm - LengthOfArifm[AnsArifm] + 1; i <= AnsArifm; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\nLength: %d", LengthOfArifm[AnsArifm]);
		printf("\nThe longest geometric sequence: ");
		for(int i = AnsGeom - LengthOfGeom[AnsGeom] + 1; i <= AnsGeom; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\nLength: %d", LengthOfGeom[AnsGeom]);
	}

    free(a);

	getch();
}
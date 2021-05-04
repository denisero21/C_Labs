
#include<iostream>
#include "list.h"

int main()
{
	List Number;
	float x, y;
	float result;

	std::cout << "Enter the first number please: ";
	std::cin >> x;
	Number.Add(x);

	std::cout << "Enter the second number please: ";
	std::cin >> y;
	Number.Add(y);

	bool dog = true;
	while(dog)
	{
		std::cout << "\n1.LongSumLong\n2.LongSubLong\n3.LongMulLong\n4.LongDivLong\n5.Exit\n";
		int n;
		std::cin >> n;

		switch(n)
		{
			case 1: result = Number.LongSumLong(x,y); break;
			case 2: result = Number.LongSubLong(x,y); break;
			case 3: result = Number.LongMulLong(x,y); break;
			case 4: result = Number.LongDivLong(x,y); break;
			case 5: dog = false; break;
		}

		if(dog) std::cout << "Result: " << result << std::endl;
		else std::cout << "Good luck!";
    }

	system("pause>nul");
	return 0;
}

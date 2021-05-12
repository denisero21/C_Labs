#include <iostream>
#include "Main.h"

int main()
{
	  std::string x, y;

	  std::cout << "Enter the first number: ";
	  std::cin >> x;

	  std::cout << "Enter the second number: ";
	  std::cin >> y;

	  vector<int> vx = convert(x);
	  vector<int> vy = convert(y);

	  std::cout << "\nSumm: ";
	  for (auto i : LongAddLong(castStrToList(x), castStrToList(y))) {
		std::cout << i;
	  }

      vector<int> vec = LongSubLong(vx, vy);
	  reverse(vec.begin(), vec.end());
	  std::cout << "\nDifference: ";
	  for (auto i : vec) {
		std::cout << i;
	  }

	  system("pause>nul");
	  return 0;
}

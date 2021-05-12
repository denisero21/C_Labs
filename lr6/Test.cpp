#include <cassert>
#include <iostream>
#include "Tree.h"

int Slen(char *str);

void test() {
  Tree tree;
  char str[] = "Shelly";
  for (int i = 0; i < Slen(str); i++)
  {
	tree.Insert(str[i]);
  }
  assert(tree.Count('h') == 3);
  assert(tree.Count('l') == 1);
}

#undef main
int main() {
  test();
  return 0;
}

int Slen(char *str)
{
	int count = 0;
	while(str[count] != '\0')
		count++;

	return count;
}

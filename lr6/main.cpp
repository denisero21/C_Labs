
#include<iostream>
#include "Tree.h"

int Slen(char *str);

int main() {
    Tree tree;
    char str[50];

    std::cout << "Please enter the string: ";
    std::cin >> str;

    for (int i = 0; i < Slen(str); i++) 
    {
        tree.Insert(str[i]);
    }

    std::cout << "Enter the char you want to operate with: ";
    char ch;
    std::cin >> ch;
    std::cout << "\nThere are " << tree.Count(ch) << " under this node";

    return 0;
}

int Slen(char *str)
{
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}
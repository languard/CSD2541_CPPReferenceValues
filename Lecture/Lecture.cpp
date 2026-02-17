// Lecture.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void AddOneToAll(int &a, int b, int c)
{
    a = a + 1;
    b = b + 1;
    c = c + 1;
}

void ArrayTest(int x[])
{
    int length = sizeof(x);
    std::cout << "The array length is " << length << std::endl;   
}


int main()
{
    std::cout << "Hello World!\n";
    int x = 0;
    int y = 2;
    int z = 4;

    AddOneToAll(x, y, z);

    std::cout << "Values are " << x << " " << y << " " << z << std::endl;

    int test[10];

    ArrayTest(test);

    int length = sizeof(test);
    std::cout << "(main) The array length is " << length << std::endl;
}

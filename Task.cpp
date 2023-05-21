// Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "bubble_sort.h"
#include "Triangle.h"


using namespace std;

void show(const Triangle& m)
{
	for (size_t i = 0; i < m.size(); ++i)
	{
		std::cout << m[i] << "; ";
	}
	std::cout << std::endl;
}

Triangle add(const Triangle& m, elem_type v)
{
	Triangle mas(m);
	return mas;
}


int main()
{
    cout << "strat\n";
	Triangle m1(10);
	for (size_t i = 0; i < m1.size(); ++i)
	{
		m1[i] = i * 2;
	}
	show(m1);

	Triangle m2 = m1;
	m1[0] = 10;
	show(m2);
	m2 = m1;

	Triangle m3 = add(m2, 10);
	show(m3);
	std::cout << "--------\n";

	//show(15); // error because the constructor Triangle(size_t len) is explicit. 
	show(Triangle(15));

	// Mas1d m4 = 17; // error because the constructor Triangle(size_t len) is explicit.
	Triangle m4 = Triangle(17); //because explicit

	m2 = Triangle(15);

    return 0;
}

/*Triangle m1(10);
for (size_t i = 0; i < m1.size(); ++i)
{
	m1[i] = i * 2;
}
show(m1);
m1 /= 4;
show(m1);

Triangle m2 = m1;
m1[0] = 10;
show(m2);
m2 = m1;

Triangle m3 = add(m2, 10);
show(m3);
std::cout << "--------\n";

//show(15); // error because the constructor Triangle(size_t len) is explicit. 
show(Triangle(15));

// Mas1d m4 = 17; // error because the constructor Triangle(size_t len) is explicit.
Triangle m4 = Triangle(17); //because explicit

m2 = Triangle(15);*/
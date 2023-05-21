#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

typedef double elem_type;


class Triangle
{
public:
	int a;

	Triangle():length(0),mas(nullptr)
	{

	}
	explicit Triangle(size_t len)
	{
		mas = new elem_type[len];
		length = len;
	}

	~Triangle()
	{
		delete[]mas;
	}

	size_t size() const
	{
		return length;
	}
	///deafault ctor and dtor copyctor ///show!

	////////methods
	void Print() const
	{
		std::cout << "Print" << std::endl;
	}

	void Print(int z) const 
	{
		std::cout << z;
	}

	elem_type& operator[](int index) const
	{
		if (index >= 0 and index < length)
		{
			return mas[index];
		}
		else
		{
			throw std::out_of_range("wrong key");
		}
	}

	// copy constructor
	Triangle(const Triangle& other)
	{
		mas = new elem_type[other.length];
		length = other.length;
		std::copy(other.mas, other.mas + other.length, mas);
	}

	// move constructor
	Triangle(Triangle&& other)
	{
		mas = other.mas;
		other.mas = nullptr;
		length = other.length;
		other.length = 0;
	}



	// copy assignment
	Triangle& operator=(const Triangle& other) noexcept
	{
		// Guard self assignment
		if (this == &other)
			return *this;

		if (length != other.length) {
			delete[] mas;
			mas = nullptr;
			length = 0;
			mas = new elem_type[other.length];
			length = other.length;
		}
		std::copy(other.mas, other.mas + other.length, mas);
		return *this;
	}

	// move assignment
	Triangle& operator=(Triangle&& other) noexcept
	{
		// Guard self assignment
		if (this == &other)
			return *this;

		delete[] mas;
		mas = nullptr;
		length = 0;
		mas = other.mas;
		other.mas = nullptr;
		length = other.length;
		other.length = 0;
		return *this;
	}


private:
	int x;
	elem_type* mas;
	size_t length;

protected:
	int cos;


};


////////////////////ctor and dtor

/*  Triangle() :a(1), x(1)
	{


	}*/

	/*explicit Triangle(int a):a(a)
	{

	}*/

	/*Triangle(int k, int d) :a(k), x(d)
   {

   }*/

   /* ~Triangle()
   {
	   std::cout << "End of obj" << std::endl;
   }*/




////////struct 
struct Shedule {
	std::string date_of_arrive;
	std::string date_of_depart;
	enum MyEnum
	{
		Y,
		N
	};
};

///////////enum
enum Operation
{
	A,
	B,
	C

};


////////////operator overloading

std::ostream& operator<<(std::ostream& os, const Triangle& obj);
std::istream& operator >> (std::istream& is, Triangle& obj);



/*Triangle& operator++()
{
	++a;// фактический инкремент происходит здесь
	return *this; // вернуть новое значение по ссылке
}

// постфиксный инкремент
Triangle operator++(int)
{
	Triangle old = *this; // скопировать старое значение
	operator++();  // префиксный инкремент
	return old;    // вернуть старое значение
}*/




/*Triangle operator +(const Train& train)
{
	return Triangle(this->a + train.a);
}*/



/*int& operator[](int index)
{
	if (index > 0 and index < length)
	{
		return arr[index];
	}
	else
	{
		throw std::out_of_range("wrong key");
	}
}*/

/*int& operator()(size_t i, size_t j)
{
	if (i > 0 and i < length)
	{
		return mass[i][j]; //mass(i,j)

	}
	else
	{
		throw std::out_of_range("wrong key");
	}
}*/


///////typedef double elem_type;

/*
// copy constructor
Triangle(const Triangle& other)
{
	mas = new elem_type[other.length];
	length = other.length;
	std::copy(other.mas, other.mas + other.length, mas);
}

// move constructor
Triangle(Triangle&& other)
{
	mas = other.mas;
	other.mas = nullptr;
	length = other.length;
	other.length = 0;
}



// copy assignment
Triangle& operator=(const Triangle& other) noexcept
{
	// Guard self assignment
	if (this == &other)
		return *this;

	if (length != other.length) {
		delete[] mas;
		mas = nullptr;
		length = 0;
		mas = new elem_type[other.length];
		length = other.length;
	}
	std::copy(other.mas, other.mas + other.length, mas);
	return *this;
}

// move assignment
Triangle& operator=(Triangle&& other) noexcept
{
	// Guard self assignment
	if (this == &other)
		return *this;

	delete[] mas;
	mas = nullptr;
	length = 0;
	mas = other.mas;
	other.mas = nullptr;
	length = other.length;
	other.length = 0;
	return *this;
}

Triangle& operator+=(elem_type val)
{
	for (size_t i = 0; i < length; i++)
	{
		mas[i] += val;
	}
	return *this;
}*/

//////friend func and operators > < == ...

/*friend int cmp(const Triangle& lhs, const Triangle& rhs);

inline int cmp(Triangle Triangle& lhs, Triangle Train& rhs)
{
	return lhs.x - rhs.x;
}

inline bool operator ==(const Triangle& lhs, const Triangle& rhs) { return cmp(lhs, rhs) == 0; }
inline bool operator !=(const Triangle& lhs, const Triangle& rhs) { return cmp(lhs, rhs) != 0; }
inline bool operator < (const Triangle& lhs, const Triangle& rhs) { return cmp(lhs, rhs) < 0; }
inline bool operator > (const Triangle& lhs, const Triangle& rhs) { return cmp(lhs, rhs) > 0; }
inline bool operator <=(const Triangle& lhs, const Triangle& rhs) { return cmp(lhs, rhs) <= 0; }
inline bool operator >=(const Triangle& lhs, const Triangle& rhs) { return cmp(lhs, rhs) >= 0; }*/

/*bool operator ==(const Triangle& rhs)
{
	return this->a == rhs.a;
}

bool operator !=(const Triangle& rhs)
{
	return !operator==(rhs);
}*/

//////static 


// Metaprogramming for Mathematics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define Fibinacci_T(n) Fib::Fibinacci<n>::Val
#define Factorial_T(n) Fact::Factorial<n>::Val

namespace Fib
{
	template <unsigned T> struct Fibinacci
	{
		enum
		{
			Val = Fibinacci<T - 1>::Val + Fibinacci<T - 2>::Val
		};
	};

	// Specialization for n = 1 or 0
	template <> struct Fibinacci<0> { enum { Val = 0 }; };
	template <> struct Fibinacci<1> { enum { Val = 1 }; };
}

namespace Fact
{
	template <unsigned T> struct Factorial
	{
		enum
		{
			Val = T * Factorial<T - 1>::Val
		};
	};

	// Specialization for n = 1
	template <> struct Factorial<1> { enum { Val = 1 }; };
}

int main()
{
	std::cout << Fibinacci_T(6) << std::endl;
	std::cout << Fibinacci_T(7) << std::endl;
	std::cout << Fibinacci_T(8) << std::endl;

	std::cout << Factorial_T(6) << std::endl;
	std::cout << Factorial_T(7) << std::endl;
	std::cout << Factorial_T(8) << std::endl;

	return 0;
}
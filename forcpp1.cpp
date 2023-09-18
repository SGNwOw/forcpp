#include <iostream>
void f1(int n, int k) {
	for (int i = 0; i < n; i++)
	{
		std::cout << k << std::endl;
	}
}
void f2(int a, int b) {
	int times = 0;
	for (int i = 0; a <= b; a++, times++) {
		std::cout << a << std::endl;
	}
	std::cout << "chisel vivelos=" << times << std::endl;
}
void f3(int a, int b) {
	int times = 0;
	b--;
	for (; a < b; times++, b--)
	{
		std::cout << b << std::endl;
	}
	std::cout << "chisel vivelos=" << times << std::endl;
}
void f4(double price) {
	for (int i = 1; i <= 11; i++)
	{
		std::cout << price * i << std::endl;
	}
}
void f5(double price) {
	double kg = 0;
	for (; kg <= 1; kg += 0.1)
	{
		std::cout << price * kg << std::endl;
	}
}
void f6(double price) {
	double kg = 1.2;
	for (; kg <= 2; kg += 0.2)
	{
		std::cout << price * kg << std::endl;
	}
}
void f7(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; ++i)
	{
		sum = sum + i;
	}
	std::cout << sum << std::endl;
}
void f8(int a, int b) {
	int sum = 1;
	for (int i = a; i <= b; ++i)
	{
		sum = sum * i;
	}
	std::cout << sum << std::endl;
}
void f9(int a, int b) {
	int res = 0;
	for (int i = a; i <= b; ++i)
	{
		res += pow(i, 2);
	}
	std::cout << res << std::endl;
}
double f10(int n) {
	double res = 0;
	for (double i =1; i<=n; ++i)
	{
		res += 1 / i;
	}
	return res;
}
double f11(double n) {
	double res = 0;
	for (int i = 0; i <= n; ++i)
	{
		res += pow(n + i, 2);
	}return res;
}
double f12(double n ) {
	double res = 1.1;
	double sum = 0;
	for (double i = 0.1; i <=n; i += 0.1)
	{
		res+= i;
		res *=  res-i;
	}
	return res;
}
double f13(double n) {
	double sum = 0;
	int z = 1;
	for (double i = 1.1; i <= n; ++i,++z)
	{
		z % 2 == 0 ? sum += 1 : sum = -+1;
	}
	return sum;
}
//double f14(int n)
void f15(double a, int n) {
	int res = 1;
	for (int i=1; i<=n;++i)
	{
		res *= a;
	}
	std::cout << res << std::endl;
}
int  f16(double a, int n) {
	int res = 0;
	for (int i = 0; i <=n;++i)
	{
		std::cout << pow(a, i) << std::endl;
	}
	return 0;
}
int f17(double a, int n) {
	int res = 0;
	for (int  i = 0; i <=n; i++)
	{
		res += pow(a, i);
	}
	return res ;
}
double f18(int a, int n) {
	int res = 1;
	for (int i = 0; i <=n; i++)
	{
		i % 2 == 0 ? res -= std::pow(a, i) : res += std::pow(a, i);
	}
	return 1- res;
}
 /*f19*/double fact(int value) {
	if (value == 0 || value == 1) {
		return 1;
	}
	{
		return value * fact(value - 1);
	}
}
 int f20(int n) {
	 int res = 0;
	 for (int i = 1; i <= n; i++)
	 {
		 res += fact(i);
	 }
	 return res;
 }
 double f21(int n) {
	 double res = 1;
	 for (int i = 1; i <=n; i++)
	 {
		 res += 1 / fact(i);
	 }
	 return res;
 }
 double f22(int x, int n) {
	 double res = 0;
	 for (int i = 0; i <=n; i++)
	 {
		 res += pow(x, i) / fact(i);
	 }
	 return res;
 }
 double f23(double x, int n) {
	 int res = 0;
	 for (int i = 0; i <=n ; i+=2)
	 {
		 i % 2 == 0 ? res -= std::pow(x, i) / fact(i) : res += std::pow(x, i) / fact(i);
	 }
	 return res;
 }

 int main()
 {
	 //f1(2, 5);
	 //f2(1, 4);
	 //f3(1, 5);
	 //f4(2);
	 //f5(2);
	 //f6(2);
	 //f7(2,5);
	 //f8(1, 5);
	 //f9(1, 4);
	 //std::cout << f10(3);
	 //std::cout << f11(3);
	 //std::cout << f12(0.2);
	 //std::cout << f13(5);
	 //f15(5, 2);
	 //std::cout << f16(2, 4) << std::endl;
	 //std::cout << f17(2, 4) << std::endl;
	 //std::cout<< f18(2, 4) << std::endl;
	 /*f19*///std::cout << fact(5) << std::endl;
	 //std::cout << f20(4);
	 //std::cout << f21(3);
	 //std::cout << f22(3, 2);
	 std::cout << f23
 }
#include <iostream>
#include <math.h>
#include<memory>
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
	double res = 1;
	for (double i = 1; i <=n; ++i)
	{
		res = res * (1 + 0.1 * i);
	}
	return res;
}
double f13(double n) {
	double res = 0;
	for (double i = 1; i <= n; ++i)
	{
		res += pow(-1, i + 1) * (1 + i / 10);
	}
	return res;
}
double f14(int n) {
	int res = 0;
	for (int i = 1; i<=n; i++)
	{
		res += 2 * i -1;
	}
	return res;
}
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
 /*f19*/double Fact(int value) {
	if (value == 0 || value == 1) {
		return 1;
	}
	{
		return value * Fact(value - 1);
	}
}
 int f20(int n) {
	 int res = 0;
	 for (int i = 1; i <= n; i++)
	 {
		 res += Fact(i);
	 }
	 return res;
 }
 double f21(int n) {
	 double res = 1;
	 for (int i = 1; i <=n; i++)
	 {
		 res += 1 / Fact(i);
	 }
	 return res;
 }
 double f22(int x, int n) {
	 double res = 0;
	 for (int i = 0; i <=n; i++)
	 {
		 res += pow(x, i) / Fact(i);
	 }
	 return res;
 }
 double f23(double x, int n) {
	 int res = 0;
	 for (int i = 0; i <=n ; i+=2)
	 {
		 i % 2 == 0 ? res -= std::pow(x, i) / Fact(i) : res += std::pow(x, i) / Fact(i);
	 }
	 return res;
 }
 double f24(int x, int n) {
	 double res = 0;
	 for   (int i =0;i<=n;++i)
	 {
		 res += pow(-1, i) * pow(x, 2 * i) / Fact(2 * i);
	 }
	 return  res;
 }
 double f25(double x, int n) {
	 double res = 0;
	 for (int i = 1; i <=n; i++)
	 {
		 res += pow(-1, i - 1) * pow(x, i) / i;
	 }
	 return res;
 }
 double f26(double x, int n) {
	 double res = 0;
	 for (int i = 0; i <=n; i++)
	 {
		 res += pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
	 }
	 return res;
 }
 double f27(int n, int x) {
	 int res = 0;
	 for (int i = 1; i <=n; i++)
	 {
		 res += (2 * i - 1) * pow(x, 2 * i + 1) / (2 * i) * (2 * i + 1);
	 }
	 return res;
 }
 double f28(double x, int n) {
	 int res = 0;
	 for (int i = 1; i <= n; i++)
	 {
		 res += pow(-1, i- 1) * (2 * i - 3) * pow(x, i) / (2 * i);
	 }return res;
 }
 double f29( int a, int b,int line) {
	 int h = (b - a) / line;
	 int res = 0;
	 std::cout << h << std::endl;
	 for (int i = 0; i<line; i++)
	 {
		 res = a + i * h;
	 }
	 return res;
 }
 void f30(int a, int b, int line) {
	 int h = (b - a) / line;
	 double res = 0;
	 std::cout << h << std::endl;
	 for (int i = 0; i < line; i++)
	 {
		 res = 1 - sin(a + i * h);
	 }
	 std::cout << res << std::endl;
 }
 double f31() {
	 double a = 2;
	 double n = 2;
	 for (int i = 1; i <= n; ++i)
	 {
		 a = 2 + 1 / a;
	 }
	 return a;
 }
 double for32(int n) {
	 float ai = 1;
	 int i;
	 for (i = 1; i <= n; ++i) {
		 std::cout << i << " " << (ai + 1) / i << " ";
		 ai = (ai + 1) / i;
	 }
	 return 0;
 }
 /*f33*/int Fib(int n) {
	 if (n == 0)
		 return 0;
	 if (n == 1)
		 return 1;
	 return Fib(n - 1) + Fib(n - 2); {
		 for (int i = 0; i < 15; i++)
		 {
			 std::cout << Fib(i) << " ";
		 }
		 return 0;
	 }
 }
 

 //f32-f35 (?)
 double f36(int n, int k) {
	 int res = 0;
	 for (int i = 0; i <=n ; i++)
	 {
		 res += pow(i, k);
	 }
	 return res;
 }
 double f37(int n) {
	 int res = 0;
	 for (int i = 0; i <=n; i++)
	 {
		 res += pow(i, i);
	 }
	 return res;
 }
 int f38(int n) {
	 int res = 0;
	 for (int i = 0; i <=n; i++,n--)
	 {
		 res += pow(i, n);
	 }
	 return res;
 }
 void f39(int a, int b) {
	 for (int a = 0; a <= b; a++)
	 {
		 for (int i = 1; i <= a; i++)
		 {
			 std::cout << a << std::endl;
		 }
	 }
	
 }
 void f40(int a,int b) {
	 for (int i = 1; i <= b - a + 1; i++)
	 {
		 for (int i2 = 1; i2 <= i; i2++)
		 {
			 std::cout << a + i -1 << std::endl;
		 }
	 }
 }
 int wh1(int a,int  b) {
	 while (a > b)
	 {
		 a -= b;
	 }
	 return a;
 }
 double wh2(double a, double b) {
	 int i = 0;
	 while (a >= b) {
		 a -= b;
		 i++;
	 }
	 return i;
 }
 void wh3(int n, int k) {
	 int i = 0;
	 while (n >= k)
	 {
		 n -= k;
		 ++i;
	 }
	 std::cout << i << "\n" << n;
 }
 int wh4(int a) {
	 while (a > 0)
	 {
		 a -= 3;
	 }
		 if (a == 0)
			 std::cout << "true";

		 else
			 std::cout << "false";
	 
	 return 0;
 }
 int wh5(int  n) {
	 int k = 1;
	 for (int i = 2; i < n; ++k) {
		 i *= 2;
	 }
		 return k;
 }
 /*dvoynoy factorial*/int doublefact(int n) {
	 if (n<3) {
		 return n;
	 }
	 {
		return  n* doublefact(n - 2);
	 }
 }
 int wh7(int n) {
	 int k = 1;
	 for (; k * k <= n; ++k)
	 {

	 }
		 return k;
 }
 int wh8(int n) {
	 int k = 1;
	 while (k*k<=n)
	 {
		 k++;
	 }
	 return k;
 }

 int wh9(int n) {
	 int k = 1;
	 while (pow(3,k)<n)
	 {
		 ++k;
	 }
	 return k;
 }int wh10(int n) {
	 int k = 1;
	 while (pow(3,k)<n)
	 {
		 ++k;
	 }
	 return k;
 }
 int wh11(int n) {
	 int res = 0, ik;
	 for (int k = 1; res < n; ++k)
	 {
		 res += k;
		 ik = k;
	 }
	 std::cout << res << " ";
	 return ik;
 }

 int wh13(int a) {
	 int res = 0;
	 int ik = 0;
	 for (int k = 1; res < a; k++)
	 {
		 res += 1/k;
		 ik = k;
	 }
	 std::cout << res << " ";
	 return ik;
}
 double wh15(double p) {
	 double k = 0;
	 double s = 1000;
		while(s<=1100)
	 {
			k++;
		 s += s * p/100;
	 }
	 std::cout << s ;
	 return k;
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
	 //std::cout << f12(2);
	 //std::cout << f13(3);
	 //std::cout << f14(5);
	 //f15(5, 2);
	 //std::cout << f16(2, 4) << std::endl;
	 //std::cout << f17(2, 4) << std::endl;
	 //std::cout<< f18(2, 4) << std::endl;
	 //std::cout << Fact(5) << std::endl;
	 //std::cout << f20(4);
	 //std::cout << f21(3);
	 //std::cout << f22(2, 3);
	 //std::cout << f23(2,3);
	 //std::cout << f24(2,3);
	 //std::cout << f25(3,3);
	 //std::cout << f26(2,2);
	 //std::cout << f27(2, 2);
	 //std::cout << f28(2, 2);
	 //std::cout << f29(2, 10, 2) << std::endl;
	 //f30(2, 10, 2);
	 //std::cout << f31();
	 //std::cout<< f32(2);
	 //std::cout << f36(2,2);
	 //std::cout << f37(2);
	 //std::cout << f38(4);
	 //f39(1, 3);
	 //f40(4,6);
	 //std::cout << Fib(6);
	 //std::cout << wh1(14, 3);
	 //std::cout << wh2(11, 2);
	 //wh3(5, 2);
	 //wh4(6);
	 //std::cout << wh5(8);
	 //std::cout << doublefact(7);
	 //std::cout << wh7(10);
	 //std::cout << wh9(28);
	 //std::cout << wh11(5);
	 //std::cout << wh13(1);
	 //std::cout << wh15(3);
	 //std::cout << wh8(5);
	 //std::cout << wh10(5);
 }
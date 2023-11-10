#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>
#include"Comparison.h"

int main()
{
	Comparison<int, int> a(114, 34);
	Comparison<float, float> b(42.195f, 3.141592f);
	Comparison<double, double> c(8.17, 33.4);
	Comparison<int, float> d(14, 42.195f);
	Comparison<int, double> e(14, 15.1);
	Comparison<float, double> f(1.19f, 8.1);

	printf("%d\n", a.Min());
	printf("%f\n", b.Min());
	printf("%f\n", c.Min());
	printf("%d\n", d.Min());
	printf("%d\n", e.Min());
	printf("%f\n", f.Min());
	return 0;
}
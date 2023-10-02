#include<stdio.h>

int calc(int a, int b)
{
	return a + b;
}
float calc(float a, float b)
{
	return a + b;
}


template <typename Type>
Type Min(Type a, Type b)
{
	if (a <= b) {
		return static_cast<Type>(a);
	}
	else {
		return static_cast<Type>(b);
	}
}
template<>
char Min(char a, char b)
{
	return 0;
}

int main()
{
	int resultInt = Min<int>(114, 514);
	float resultFloat = Min<float>(114.0f, 51.4f);
	double resultDouble = Min<double>(15.4f, 114.0f);
	char resultChar = Min('a', 'b');
	printf("%d\n", resultInt);
	printf("%f\n", resultFloat);
	printf("%lf\n", resultDouble);
	if(resultChar==NULL)
	{
		printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	}

	return 0;
}
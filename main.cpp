#include<stdio.h>
#include<typeinfo>
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
	//if (typeid(a).name() == 'c' || typeid(b).name() == 'c')
	//{
	//	return static_cast<Type>(printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ"));
	//}
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
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return 0;
}

int main()
{
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(114.0f, 51.4f));
	printf("%lf\n", Min<double>(15.4f, 114.0f));
	printf("%s\n", Min('a', 'b'));

	return 0;
}
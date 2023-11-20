#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>

int Remainder(int a,int b)
{
	return a % b;
}

typedef void(*pFunc)();

void SetTimeout(std::function<pFunc()> p, int second)
{
	printf("結果は%d秒後　\n", second);
	Sleep(second * 1000);
	p();
};

int main()
{
	SetConsoleOutputCP(65001);
	srand((unsigned int)time(NULL));
	std::function<pFunc()> p;
	int DiceNumber = rand() % 6 + 1;
	int number = 0;

	printf("さいころの出目予想・丁なら０、半なら１を入力　\n");
	scanf_s("%d", &number);

	std::function<pFunc()> DispResult = [&]()
	{
		pFunc x=0;
		printf("出目:%d　\n", *&DiceNumber);
		if (number == 0)
		{
			printf("予想は丁　\n");
		}
		if (number == 1)
		{
			printf("予想は半　\n");
		}
		return x;
	};

	p = DispResult;
	SetTimeout(p, 3);

	switch (Remainder(DiceNumber, 2))
	{
	case 0:
		printf("正解は丁　\n");
		if (number == 0)
		{
			printf("正解!　\n");
		}
		else
		{
			printf("不正解......　\n");
		}
		break;
	case 1:
		printf("正解は半　\n");
		if (number == 1)
		{
			printf("正解!　\n");
		}
		else
		{
			printf("不正解......　\n");
		}
		break;
	}
	return 0;
}
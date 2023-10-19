#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>

int Remainder(int a,int b)
{
	return a % b;
}

typedef void (*pFunc)(int*);

void setTimeout(pFunc p, int second,int n)
{
	printf("結果は%d秒後\n",second);
	Sleep(second * 1000);
	p(&n);
}

void DispResult(int *s)
{
	printf("出目：%d\n",*s);
}

int main()
{
	srand((unsigned int)time(NULL));
	pFunc p;
	int DiceNumber = rand() % 6 + 1;
	int number = 0;
	std::function<int(int, int)> Remainder =
		[](int a, int b) {	return a % b; };

	printf("丁（偶数・０を入力）か半（奇数・１を入力）か\n");
	scanf_s("%d", &number);

	p = DispResult;
	setTimeout(p, 3, DiceNumber);

		switch (Remainder(DiceNumber,2))
		{
		case 0:
			printf("正解は丁!\n");
			if (number == 0)
			{
				printf("正解!\n");
			}
			else
			{
				printf("不正解......\n");
			}
			break;
		case 1:
			printf("正解は半!\n");
			if (number == 1)
			{
				printf("正解!\n");
			}
			else
			{
				printf("不正解......\n");
			}
			break;
		}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

int Remainder(int a,int b)
{
	return a % b;
}

typedef void (*pFunc)(int*);

void setTimeout(pFunc p, int second,int n)
{
	printf("���ʂ�%d�b��\n",second);
	Sleep(second * 1000);
	p(&n);
}

void DispResult(int *s)
{
	printf("�o�ځF%d\n",*s);
}

int main()
{
	srand((unsigned int)time(NULL));
	pFunc p;
	int (*calc)(int, int);
	int DiceNumber = rand() % 6 + 1;
	int number = 0;
	calc = Remainder;


	printf("���i����E�O����́j�����i��E�P����́j��\n");
	scanf_s("%d", &number);
	p = DispResult;
	setTimeout(p, 3, DiceNumber);
		switch (calc(DiceNumber,2))
		{
		case 0:
			printf("����͒�!\n");
			if (number == 0) {
				printf("����!\n");
			}
			else {
				printf("�s����......\n");
			}
			break;
		case 1:
			printf("����͔�!\n");
			if (number == 1) {
				printf("����!\n");
			}
			else {
				printf("�s����......\n");
			}
			break;
		}
	return 0;
}
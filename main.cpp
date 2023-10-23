#include<stdio.h>

int Recursive(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return(n * Recursive(n - 1));
}

int RecursiveSalary(int n)
{
	if (n <= 1)
	{
		//printf("1���Ԗ�:100�~\n");
		return 100;
	}
	//printf("%d���Ԗ�:%d�~\n", n, (2 * RecursiveSalary(n - 1) - 50));
	return RecursiveSalary(n - 1) + (2 * RecursiveSalary(n - 1) - 50);
}

int main()
{
	int worktime = 2;
	printf("��ʓI�Ȓ���F%d\n", 1072 * worktime);
	//RecursiveSalary(worktime);
	printf("�ċA�I�Ȓ���F%d\n", RecursiveSalary(worktime));

	return 0;
}
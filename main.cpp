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
		//printf("1時間目:100円\n");
		return 100;
	}
	//printf("%d時間目:%d円\n", n, (2 * RecursiveSalary(n - 1) - 50));
	return RecursiveSalary(n - 1) + (2 * RecursiveSalary(n - 1) - 50);
}

int main()
{
	int worktime = 2;
	printf("一般的な賃金：%d\n", 1072 * worktime);
	//RecursiveSalary(worktime);
	printf("再帰的な賃金：%d\n", RecursiveSalary(worktime));

	return 0;
}
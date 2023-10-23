#include<stdio.h>

int CalcRecursive(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return(n * CalcRecursive(n - 1));
}

int CalcRecursiveSalary(int n)
{
	if (n <= 1)
	{
		return 100;
	}
	return(2 * CalcRecursiveSalary(n - 1) - 50);
}

int main()
{
	int worktime = 10;
	int normalSalary = 1072;
	printf("一般的な賃金\n");
	for (int i = 1; i <= worktime; i++)
	{
		printf("%d時間分:%d\n", i, normalSalary * i);
	}
	printf("\n再帰的な賃金\n");
	for (int i = 1; i <= worktime; i++)
	{
		printf("%d時間目:%d\n", i, CalcRecursiveSalary(i));
	}

	return 0;
}
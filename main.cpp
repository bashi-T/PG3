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
		return 100;
	}
	return(2 * RecursiveSalary(n - 1) - 50);
}

int main()
{
	int worktime = 10;
	printf("一般的な賃金:%d\n", 1072 * worktime);
	//RecursiveSalary(worktime);
	printf("再帰的な賃金\n");
	for (int i = 1; i <= worktime; i++)
	{
		printf("%d時間目:%d\n",i, RecursiveSalary(i));
	}


	return 0;
}
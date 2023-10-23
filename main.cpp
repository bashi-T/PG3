#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>

class Enemy
{
public:
	void TestFunc();
private:
	void (Enemy::*pFunc)();
};

int main()
{

	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>
#include"IShape.h"


int main()
{
	SetConsoleOutputCP(65001);
	IShape* iShape[2];
	for (int i = 0; i < 2; i++) {
	if(i<1){
		iShape[i] = new Circle;
	}
	else {
		iShape[i] = new Rectangle;
	}
	}


	return 0;
}
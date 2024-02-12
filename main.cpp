#pragma once
#include<stdio.h>
#include<thread>
#include<string>
//#include<chrono>

int main()
{
	std::string  a(100000, 'a');
	std::chrono::system_clock::time_point aStart, aEnd;
	aStart = std::chrono::system_clock::now();
	std::string b1 = a;
	aEnd = std::chrono::system_clock::now();
	double elapsed = std::chrono::duration_cast<std::chrono::microseconds>(aEnd - aStart).count();
	printf("%lf\n", elapsed);

	std::string b2 = a;
	std::chrono::system_clock::time_point bStart, bEnd;
	bStart = std::chrono::system_clock::now();
	a = std::move(b2);
	bEnd = std::chrono::system_clock::now();
	elapsed = std::chrono::duration_cast<std::chrono::microseconds>(bEnd - bStart).count();
	printf("%lf\n", elapsed);

	return 0;
}
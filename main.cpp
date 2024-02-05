#pragma once
#include<stdio.h>
#include<thread>
#include<string>
//#include<chrono>

int main()
{
	std::string  a(100000, 'a');
	std::chrono::system_clock::time_point start, end;
	start = std::chrono::system_clock::now();
	std::string b1 = a;
	end = std::chrono::system_clock::now();
	double elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	printf("%lf\n", elapsed);
	std::string b2 = a;
	std::move(b2);

	return 0;
}
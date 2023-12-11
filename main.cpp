#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<functional>
#include<list>
#include<iostream>

int main()
{
	std::list<const char*>YamanoteLine
	{
		"Tokyo", "Yurakucho", "Shimbashi", "Hamamatucho",
		"Tamachi", "Shinagawa", "Osaki", "Gotanda", "Meguro",
		"Ebisu", "Shibuya", "Harajuku", "Yoyogi", "Shinjuku",
		"Shin-Okubo", "takadanobaba", "mejiro", "Ikebukuro",
		"Otuka", "Sugamo", "Komagome", "Tabata", "Nippori",
		"Uguisudani", "Ueno", "Okachimachi", "Akibahara", "Kanda"
	};
	std::cout << "1970年山手線" << "\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		std::cout << *itr << "->";
		if (*itr == "Kanda")
		{
			std::cout << "Tokyo\n\n";
		}
	}

	std::cout << "2019年山手線" << "\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		if (*itr == "Nippori")
		{
			itr = YamanoteLine.insert(itr,"Nishi-Nippori");
			std::cout << *itr << "->";
			++itr;
		}
		std::cout << *itr << "->";
		if (*itr == "Kanda")
		{
			std::cout << "Tokyo\n\n";
		}
	}

	std::cout << "2022年山手線" << "\n";
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		if (*itr == "Shinagawa")
		{
			itr = YamanoteLine.insert(itr, "Takanawa Gateway");
			std::cout << *itr << "->";
			++itr;
		}
		std::cout << *itr << "->";
		if (*itr == "Kanda")
		{
			std::cout << "Tokyo\n";
		}
	}


	return 0;
}
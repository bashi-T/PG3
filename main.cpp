#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<functional>
#include<list>
#include<iostream>

int main()
{
	std::list<const char*>lst
	{
		"Tokyo", "Yurakucho", "Shimbashi", "Hamamatucho",
		"Tamachi", "Shinagawa", "Osaki", "Gotanda", "Meguro",
		"Ebisu", "Shibuya", "Harajuku", "Yoyogi", "Shinjuku",
		"Shin-Okubo", "takadanobaba", "mejiro", "Ikebukuro",
		"Otuka", "Sugamo", "Komagome", "Tabata", "Nippori",
		"Uguisudani", "Ueno", "Okachimachi", "Akibahara", "Kanda"
	};

	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "->";
		if (*itr == "Kanda")
		{
			std::cout << "Tokyo\n\n";
		}
	}

	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Nippori")
		{
			itr = lst.insert(itr,"Nishi-Nippori");
			std::cout << *itr << "->";
			++itr;
		}
		std::cout << *itr << "->";
		if (*itr == "Kanda")
		{
			std::cout << "Tokyo\n\n";
		}
	}

	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Shinagawa")
		{
			itr = lst.insert(itr, "Takanawa Gateway");
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
#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>

int main() 
{
	std::string a(1000000, 'a');

	std::chrono::system_clock::time_point startl = std::chrono::system_clock::new();

	return 0;
}
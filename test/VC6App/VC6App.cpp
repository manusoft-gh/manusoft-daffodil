// VC6App.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

int main(int argc, char* argv[])
{
	printf("Hello World!\n");
	std::vector< int > v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	int a = v[2];
	return 0;
}


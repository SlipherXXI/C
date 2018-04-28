/* Author Ryan Slipher
started 1/18/18
CST_171 Project 1
a program using variables, if statements, outputs and print a comand line argument 
*/

#include <iostream>
#include <string>

//using namespace std;
int addOne(int tnput);

int main(int argc, const char* argv[])
{
	std::string input = argv[1];
	std::cout << input << std::endl;
	
	
	int a = 8;		//variable 
	int b = 1;
	
	std::cout << "GOAL!\n";
	std::cout << a << std::endl;		//prints int variable
	std::cout << b << std::endl;

	if (a > 5) {			//if statement
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}

	std::cin.get();
	return 0;

}

int addOne(int tnput)
{
	return 0;
}

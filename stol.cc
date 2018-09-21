#include <iostream>
#include <string>
 
int main()
{
	std::string str1 = "45";
	std::string str2 = "3.14159";
	std::string str3 = "31337 with words";
	std::string str4 = "words and 2";
 
	int myint1 = std::stoi(str1);
	int myint2 = std::stoi(str2);
	int myint3 = std::stoi(str3);
	// error: 'std::invalid_argument'
	int myint4;
	try
	{
		myint4 = std::stoi(str4);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Invalid parsing using function " << e.what() << std::endl;
	}
	
 
	std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << std::endl;
	std::cout << "std::stoi(\"" << str2 << "\") is " << myint2 << std::endl;
	std::cout << "std::stoi(\"" << str3 << "\") is " << myint3 << std::endl;
	//std::cout << "std::stoi(\"" << str4 << "\") is " << myint4 << std::endl;
}
// MORE: https://en.cppreference.com/w/cpp/string/basic_string/to_string
#include <vector>
#include <iostream>

main(int argc, char const *argv[])
{

	std::vector<std::string> v;

	std::string s;
	std::cout << "Enter vector elements and <ctrl-d> when finished" << std::endl;
	while (std::getline(std::cin, s)) { 
		v.push_back(s);
	}

	std::cout << "You entered first: " << v.front() << std::endl;
	std::cout << "You entered last : " << v.back() << std::endl;
	
	// // do not use std::size_t as the index variable type.That is not portable.
	// // Prefer using iterators
	// for(std::size_t i=0; i<v.size(); i++)
	// 	std::cout << "v[" << i << "]: " << v[i] << std::endl;

	// for range
	for(auto&& i : v)
	{
		std::cout << "You entered : " << i << std::endl;
	}
	
	//for(std::vector<std::string>::iterator it = v.begin(); it != v.end(); ++it) {
	// iterator backward
	for(std::vector<std::string>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
		std::cout << "reverse: " << *it << std::endl;
	}
	return 0;
}

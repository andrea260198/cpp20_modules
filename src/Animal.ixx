module;

#include <iostream>


export module animal_lib;


namespace animal_ns
{

	export class Animal
	{
	public:
		Animal(const std::string &name) {
			std::cout << "Hello from " << name << std::endl;
		}
	};

}
#include <iostream>

void	stringREF(std::string &str_ref)
{
	std::cout << &str_ref << std::endl;
	std::cout << str_ref << std::endl;
}

void	stringPTR(std::string *str)
{
	std::cout << str << std::endl;
	std::cout << *str << std::endl;
}

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	stringREF(str);
	stringPTR(&str);
	return (0);
}
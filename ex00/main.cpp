#include "Bureaucrat.hpp"

int main()
{
    try
    {
    /* do some stuff with bureaucrats */
		Bureaucrat b1("Amy", 1);
		b1.decrement_grade(); 
		std::cout << b1;
    }
    catch (std::exception & e)
    {
    /* handle exception */
		std::cerr << "Caught exception: " << e.what() << std::endl;
    }
	try
    {
    /* do some stuff with bureaucrats */
		Bureaucrat b2("Bob", 151);
		std::cout << b2;
    }
    catch (std::exception & e)
    {
    /* handle exception */
		std::cerr << "Caught exception: " << e.what() << std::endl;
    }
	try
    {
    /* do some stuff with bureaucrats */
		Bureaucrat b3("Celine", 1);
        b3.increment_grade(); 
		std::cout << b3;
    }
    catch (std::exception & e)
    {
    /* handle exception */
		std::cerr << "Caught exception: " << e.what() << std::endl;
    }
	return 0;
}
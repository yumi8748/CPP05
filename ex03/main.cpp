#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern	someRandomIntern;
	AForm		*shrub;
	shrub	= someRandomIntern.makeForm("shrubbery creation", "home");
	Bureaucrat	Amy("Amy", 1);
	Bureaucrat	Bob("Bob", 1);

	Amy.executeForm(*shrub);
	std::cout << std::endl;
	Amy.signForm(*shrub);
	std::cout << *shrub << std::endl;
	std::cout << Amy << std::endl;
	Amy.executeForm(*shrub);
	Bob.executeForm(*shrub);
	delete shrub;

	std::cout << "------------------------------------------------" << std::endl;
	std::cout << std::endl;

	AForm		*robotomy;
	robotomy	= someRandomIntern.makeForm("robotomy request", "Robot");
	Bureaucrat	colleague("Colleague", 1);

	colleague.executeForm(*robotomy);
	colleague.signForm(*robotomy);
	colleague.executeForm(*robotomy);
	colleague.executeForm(*robotomy);
	colleague.executeForm(*robotomy);
	colleague.executeForm(*robotomy);
	delete robotomy;
	
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << std::endl;

	AForm		*presidential;
	presidential	= someRandomIntern.makeForm("presidential pardon", "She");
	Bureaucrat	I("I", 6);

	I.executeForm(*presidential);
	I.signForm(*presidential);
	I.executeForm(*presidential);
	I.increment_grade();
	I.executeForm(*presidential);
	delete presidential;

		std::cout << "------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Trying to create a Form that doesn't exist. Result:" << std::endl;
	try
	{
		Intern	someRandomIntern2;
		AForm		*presidential;
		presidential	= someRandomIntern2.makeForm("Some thing that doesnt work", "You");
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	

	return (0);
}
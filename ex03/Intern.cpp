#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm	*Intern::newShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::newRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::newPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string FormList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (Intern::*CreateForm[3])(std::string) = {&Intern::newShrubbery, &Intern::newRobotomy, &Intern::newPresidential};
	
	for (int i = 0; i < 3; i++)
	{
		if (form == FormList[i])
		{
			std::cout << "Intern creates " << form << std::endl;
			return ((this->*CreateForm[i])(target));
		}
	}
	std::cout << "Form \"" << form << "\" doesn't exist!" << std::endl;
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
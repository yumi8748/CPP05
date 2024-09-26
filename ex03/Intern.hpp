#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm	*makeForm(std::string form, std::string target);
		AForm	*newShrubbery(std::string target);
		AForm	*newRobotomy(std::string target);
		AForm	*newPresidential(std::string target);
	private:

};

#endif /* ********************************************************** INTERN_H */
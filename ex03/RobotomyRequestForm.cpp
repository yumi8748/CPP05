#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robot", 72, 45), target("Undefined")
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string _target ): AForm("Robot", 72, 45), target(_target)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): AForm(src.getName(), src.getGradeSign(), src.getGradeExec()), target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->check_execute(executor);
	std::cout << "* Drilling Noises *" << std::endl;
	std::cout << "* Drilling Noises *" << std::endl;
	std::cout << "* Drilling Noises *" << std::endl;
	int	random = rand() % 2;
	if (random == 0)
		std::cout << this->target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << this->target << " has failed to be robotomized!" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(): AForm("President", 25, 5), target("Undefined")
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string _target ): AForm("President", 25, 5), target(_target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): AForm(src.getName(), src.getGradeSign(), src.getGradeExec()), target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->check_execute(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
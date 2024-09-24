#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robot", 72, 45), target("Undefined")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
RobotomyRequestForm::RobotomyRequestForm( std::string _target ): AForm("Robot", 72, 45), target(_target)
{
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
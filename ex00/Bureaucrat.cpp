#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	this->name = "undefined";
	this->grade = 0; //?
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const std::string	getName(void) const
{

}

int	getGrade(void) const
{

}

void	increment_grade(void)
{

}

void	decrement_grade(void)
{

}

GradeTooHighException: throw()

GradeTooLowException: throw()
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
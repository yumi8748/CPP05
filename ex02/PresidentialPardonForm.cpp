#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(): AForm("President", 25, 5), target("Undefined")
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
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

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
PresidentialPardonForm::PresidentialPardonForm( std::string _target ): AForm("President", 25, 5), target(_target)
{
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
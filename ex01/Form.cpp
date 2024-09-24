#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): name("undefined"), is_sign(false),  grade_to_sign(150), grade_to_exec(150)
{
}

Form::Form( const Form & other ): name(other.name), is_sign(other.is_sign),  grade_to_sign(other.grade_to_sign), grade_to_exec(other.grade_to_exec)
{
}

Form::Form(std::string _name, int gradeSign, int gradeExec): name(_name), is_sign(false),  grade_to_sign(gradeSign), grade_to_exec(gradeExec)
{
	if (gradeSign < 1)
		throw(GradeTooHighException());
	if (gradeSign > 150)
		throw(GradeTooLowException());
	if (gradeExec < 1)
		throw(GradeTooHighException());
	if (gradeExec > 150)
		throw(GradeTooLowException());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & other )
{
	(void)other;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Signed: " ;
	if (i.getSign() == false)
		o << "no" << std::endl;
	else
		o << "yes" << std::endl;
	o << "Minimum grade to be signed: " << i.getGradeSign() << std::endl;
	o << "Minimum grade to be executed: " << i.getGradeExec() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

void Form::beSigned(const Bureaucrat &b)
{
	if (this->grade_to_sign < b.getGrade())
		throw (Form::GradeTooLowException());
	this->is_sign = true;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string	Form::getName(void) const
{
	return this->name;
}

bool Form::getSign(void) const
{
	return this->is_sign;
}

const int Form::getGradeSign(void) const
{
	return this->grade_to_sign;
}

const int Form::getGradeExec(void) const
{
	return this->grade_to_exec;
}


/* ************************************************************************** */
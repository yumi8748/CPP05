#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(): name("undefined"), is_sign(false),  grade_to_sign(150), grade_to_exec(150)
{
}

AForm::AForm( const AForm & other ): name(other.name), is_sign(other.is_sign),  grade_to_sign(other.grade_to_sign), grade_to_exec(other.grade_to_exec)
{
}

AForm::AForm(std::string _name, int gradeSign, int gradeExec): name(_name), is_sign(false),  grade_to_sign(gradeSign), grade_to_exec(gradeExec)
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

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & other )
{
	(void)other;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
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
const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (this->grade_to_sign < b.getGrade())
		throw (AForm::GradeTooLowException());
	this->is_sign = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
	//continue
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string	AForm::getName(void) const
{
	return this->name;
}

bool AForm::getSign(void) const
{
	return this->is_sign;
}

const int AForm::getGradeSign(void) const
{
	return this->grade_to_sign;
}

const int AForm::getGradeExec(void) const
{
	return this->grade_to_exec;
}


/* ************************************************************************** */
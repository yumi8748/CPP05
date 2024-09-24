#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): name(name), grade(grade)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade)
{
	check_grade();
}

Bureaucrat::Bureaucrat( const Bureaucrat & other ): name(other.name), grade(other.grade)
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

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & other )
{
	if ( this != &other )
	{
		this->grade = other.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() <<", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Bureaucrat::increment_grade(void)
{
	Bureaucrat::grade--;
	check_grade();
}

void	Bureaucrat::decrement_grade(void)
{
	Bureaucrat::grade++;
	check_grade();
}

void	Bureaucrat::check_grade() const
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

void Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string	Bureaucrat::getName(void) const
{
	return name;
}

int	Bureaucrat::getGrade(void) const
{
	return grade;
}

/* ************************************************************************** */
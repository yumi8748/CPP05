#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool	is_sign = false;
		const int grade_to_sign;
		const int grade_to_exec;

	public:

		Form();
		Form( Form const & other );
		Form(std::string _name, int gradeSign, int gradeExec);
		~Form();
		Form &		operator=( Form const & other );
		
		void beSigned(const Bureaucrat &b);

		class GradeTooHighException: public std::exception
		{
			const char * what () const throw ();
		};
		class GradeTooLowException: public std::exception
		{
			const char * what () const throw ();
		};

		const std::string	getName(void) const;
		bool getSign(void) const;
		const int getGradeSign(void) const;
		const int getGradeExec(void) const;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
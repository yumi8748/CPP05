#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool	is_sign = false;
		const int grade_to_sign;
		const int grade_to_exec;

	public:

		AForm();
		AForm( AForm const & other );
		AForm(std::string _name, int gradeSign, int gradeExec);
		~AForm();
		AForm &		operator=( AForm const & other );
		
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

		void execute(Bureaucrat const & executor) const;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AForm_H */
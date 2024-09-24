#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat( Bureaucrat const & other );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & other );

		const std::string	getName(void) const;
		int	getGrade(void) const;
		void	increment_grade(void);
		void	decrement_grade(void);
		void	check_grade() const;

		class GradeTooHighException: public std::exception
		{
			const char * what () const throw ();
		};
		class GradeTooLowException: public std::exception
		{
			const char * what () const throw ();
		};

		void signForm(Form &f) const; //const
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
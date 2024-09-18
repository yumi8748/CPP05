#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;

	public:

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
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		const std::string	getName(void) const;
		int	getGrade(void) const;
		void	increment_grade(void);
		void	decrement_grade(void);

		class GradeTooHighException: public std::exception
		{

		};
		class GradeTooLowException: public std::exception
		{

		};
		
	private:
		const std::string name;
		int	grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
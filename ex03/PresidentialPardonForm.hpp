#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( std::string _target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void execute(Bureaucrat const & executor) const;

	private:
		const std::string	target;
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
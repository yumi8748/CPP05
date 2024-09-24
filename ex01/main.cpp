#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	 std::cout << "Trying Form creation: Good" << std::endl;
  try {
    Form form1("Form 1", 121, 89);
    std::cout << form1 << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Trying Form creation: too HIGH" << std::endl;
  try {
    Form form2("Form 2", 0, 89);
    std::cout << form2 << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Trying Form creation: too LOW" << std::endl;
  try {
    Form form3("Form 3", 228, 89);
    std::cout << form3 << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  Form form4("Form 4", 100, 100);
  Bureaucrat boss("Boss", 1);

  std::cout << "Trying to sign GOOD" << std::endl;
  try {
    boss.signForm(form4);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Trying to sign AGAIN" << std::endl;
  try {
    boss.signForm(form4);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  Form form5("Bob", 100, 100);
  Bureaucrat manager("Manager", 150);

  std::cout << "Trying to sign TOO LOW" << std::endl;
  try {
    manager.signForm(form5);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  Form form6("Form 6", 100, 100);
  Bureaucrat colleague("Colleague", 150);

  std::cout << "Trying to beSigned() TOO LOW - expecting to catch an exception!"
            << std::endl;
  try {
    form6.beSigned(colleague);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;
}
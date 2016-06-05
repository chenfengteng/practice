#include <iostream>
#include <vector>
#include <string>
#include <memory>

int main() {
  
  // Create two string's object, and pointed by shared pointer.
  std::shared_ptr<std::string> pNico(new std::string("nico"));
  std::shared_ptr<std::string> pJutta(new std::string("jutta"));

  // Modify values in different ways.
  (*pNico)[0] = 'N';
  pJutta->replace(0,1,"J");
  
  // Put them multiple times in a container.
  std::vector<std::shared_ptr<std::string>> whoMadeCoffee;
  whoMadeCoffee.push_back(pJutta);
  whoMadeCoffee.push_back(pJutta);
  whoMadeCoffee.push_back(pNico);
  whoMadeCoffee.push_back(pJutta);
  whoMadeCoffee.push_back(pNico);
 
  // Print all elements.
  for (auto ptr : whoMadeCoffee) {
    std::cout << *ptr << "  " ;
  }  
  std::cout << std::endl;
 
  // Overwrite a name again
  *pNico = "Nicolai";

  // Print all elements again.
  for (auto ptr : whoMadeCoffee) {
    std::cout << *ptr <<"  ";
  }
  std::cout << std::endl;

  // Print some internal data.
  std::cout << "Jutta use count: " << whoMadeCoffee[0].use_count() << std::endl;
  std::cout << "Nico be used count: " << pNico.use_count() << std::endl;
  
}

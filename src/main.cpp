#include <iostream>
#include "umlrDriver.hh"

using namespace std;

int main (int argc, char *argv[]) {
  int res = 0;
  umlrDriver driver;
  for (int i = 1; i < argc; ++i)
    if (argv[i] == std::string ("-p"))
      driver.trace_parsing = true;
    else if (argv[i] == std::string ("-s"))
      driver.trace_scanning = true;
    else if (!driver.parse (argv[i]))
      std::cout << driver.result << std::endl;
    else
      res = 1;

  // Aqui

  //rcomp::Unit *unit = driver.unit;
  cout << "tokens leidos: " << driver.unit.tokens << endl;

  std::map<std::string, int>::iterator it = driver.unit.chars.begin();
  cout << "elementos no reconocidos: ";
  if (it == driver.unit.chars.end()) cout << "Ninguno" << endl;
  cout << endl;

  while (it != driver.unit.chars.end())  {
      std::string word = it->first;
      int count = it->second;
      std::cout << word << " :: " << count << std::endl;
      it++;
  }
  return res;
}

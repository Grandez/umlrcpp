#include <iostream>
#include "umlrDriver.hh"

using namespace std;

void librerias(set<string> libraries) {
   cout << "Librerias: ";
   if (libraries.size() == 0) { cout << "Ninguna" << endl; return; }
   set<string>::iterator it;
   for (auto it = libraries.begin(); it != libraries.end(); ++it) cout << "\t" << *it << endl;
}
void functions(vector<string> funciones) {
   cout << "Funciones: ";
   if (funciones.size() == 0) { cout << "Ninguna" << endl; return; }
   cout << funciones.size() << endl;
   for (vector<string>::iterator it = funciones.begin() ; it != funciones.end(); ++it) cout << "\t" << *it << endl;
}
void signatures(list<Function *> funciones, bool full) {
	for (auto const& f : funciones) {
		cout << f->name << "(" ;
		vector<string> sig = f->getSignature(full);
		for (unsigned int i = 0; i < sig.size(); i++) {
			if (i) cout << ", ";
			cout << sig[i];
		}
		cout << ")" << endl;
	}
}

void info(Unit unit) {
   librerias(unit.libraries);
   functions(unit.getFunctionsName());
   signatures(unit.getFunctions(), false);
   signatures(unit.getFunctions(), true);


}
void parse (umlrDriver& driver, string file) {
	cout << "Analizando " << file ;
	driver.parse (file);
	cout << (driver.result == 0 ? "OK" : "KO") << endl;
    if (driver.result  == 0)
    	info(driver.unit);
}

int main (int argc, char *argv[]) {
  int res = 0;
  umlrDriver driver;
  for (int i = 1; i < argc; i++) {
	  parse(driver, argv[i]);
  }
  Unit *unit = &driver.unit;

  for (auto it=unit->raros.begin(); it != unit->raros.end(); ++it)
          cout << ' ' << *it;



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

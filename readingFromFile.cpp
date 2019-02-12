#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string name;
  ifstream file;
  file.open("names.txt");

  while(!file.eof())
  {
      getline(file, name);
      cout << name << endl;
  }
  return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream myFile;
  myFile.open("door.txt");
  myFile << "I'm writing text to a file! Woooooo!" << endl;
  myFile.close();

  return 0;
}

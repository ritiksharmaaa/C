// we have a ofstream ifstream as well we have istream and ostream >> cin and cout is a object of this class stream ;

// what is diffrence between ofstream and ostream nothing but ofstream is derive class of ostream 

// ostream can write nad read for multiple source and destination  console file network  network socket etc .. but ofstream can sefied for file destination . 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream file("example.txt");
  if (file.is_open()) {
    file << "This is a line." << endl;
    file.close();
  }
  else {
    cout << "Unable to open file.";
  }

  return 0;
}

// ostream example
#include <iostream>
using namespace std;

int main() {
  cout << "This is a line." << endl;
  return 0;


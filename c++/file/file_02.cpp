#include <fstream>
#include <iostream>

using namespace std ;

// we have to open a diffrent instace for writing and reading 
// ofstream o mean from program to file 
// if stream mean we are taking outfile to inside program .
// advance libray to do file operation such as { seeking checking end-of-file}

int main(){
    ofstream fileout;

    fileout.open("file.txt"); // open the file again for reading
    ifstream filein;
    string line ; 
    getline(filein , line );
    cout << line << endl;
    fileout.close(); // close the file after
    filein.close() ;
    return 0 ;
}
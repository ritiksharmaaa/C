// so there is way where we can saev the program obj to file this is the intial way or a database 

// we hear about pickle method in python here pickle help to sa e programing obj to file 

// for using that file we can retrive the object and serlize it to use it in django api develpment you heard we get db object we have to serlixe it to use in python data sructure so than we use it .

// in see we have to use fstream 
//which provide you class to read the file 
// use << to write a file >> to read the file 


// fstream has two main function ofstream and ifstream bith derived from fstrem so booth can open a file 

// open filw with mode  ios::in || ios::out || ios::app || ios::binary 

// to write in binary you have to use write function 

#include <fstream>
using namespace std ;

int main(){
    ofstream newFile ;
    newFile.open("file.txt"); // create file or if have  read the file and save to newfile privat mener open ; 
    //writeing file 
    newFile <<"writing file with this content \n";

    newFile.close(); // close the file after writing
    
    return 0 ;
}
// let see how we read and store binary file and store text data in binary 


// // a) Reading text from a file:
// Suppose you have a file named "example.txt" that contains a list of names, one name per line. You can read the names from the file and store them in an array using the following code:

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// for binary read we are not using >> << operate instead we have to use .read and .write function 

int main() {
    string names[100];
    int i = 0;
    ifstream file;
    file.open("example.txt", ios::binary); // Open the file in binary mode
    if (file.is_open()) {
        while (file.read((char *)&names[i], sizeof(names[i]))) {
            i++;
        }
        file.close();
    }
    else {
        cout << "Unable to open file";
    }
    return 0;
}


/// writing a binary file 

int main() {
    // Open a binary file for writing
    std::ofstream outfile("data.bin", std::ios::out | std::ios::binary);

    // Check that the file was opened successfully
    if (!outfile) {
        std::cerr << "Error: could not open file for writing" << std::endl;
        return 1;
    }

    // Write some binary data to the file
    int value = 42;
    outfile.write(reinterpret_cast<const char*>(&value), sizeof(value));

    // Close the file
    outfile.close();

    return 0;
    // We then write an int value of 42 to the file using the write method of the ofstream object. The reinterpret_cast is used to convert the pointer to value to a const char* pointer, which is required by the write method. The sizeof(value) argument indicates the number of bytes we want to write (in this case, the size of an int).
}




/// just demo with io 

int main() {
    string names[100];
    int i = 0;
    ifstream file;
    file.open("example.txt");
    if (file.is_open()) {
        while (getline(file, names[i])) {
            i++;
        }
        file.close();
    }
    else {
        cout << "Unable to open file";
    }
    return 0;
}

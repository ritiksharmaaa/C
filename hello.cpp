#include <iostream>
// or using this space 

using std::cout; // is like importing a spefic function from the name space 
// using std::endl;


using namespace std; // is like namespace which i help to prevent override teh function of module 
// example cout is function inside iostream but now it part in main code so we first load entire namespace of bydefault c than in global name space we are able to call cout direlty 

//insted we call directly we hVE TO USE std::cout method .

//creating a our namespace 
namespace New {
    void function(){
        // nothing return this function is anothere name space so we have to call this name space or use like that 
    
    };
}


int main() {
    New::function(); // calling function from new namespace 
    cout << "hello i am ritik sharma"<< std::endl; // here << do to take thign from left pass to right.
    return 0;
}

// you have to tell what  function retuen reather(){}

int rather(){}; // the normal function 

